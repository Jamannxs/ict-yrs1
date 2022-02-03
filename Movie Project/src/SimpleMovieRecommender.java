//Pitchaporn	Songprakob		Section 2	ID:6288045

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.util.*;
import java.io.*;
import java.util.regex.*;

import com.google.common.collect.BiMap;
import com.google.common.collect.HashBiMap;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;

public class SimpleMovieRecommender implements BaseMovieRecommender {

	
	@Override
	public Map<Integer, Movie> loadMovies(String movieFilename) {
		// TODO Auto-generated method stub
		Map<Integer, Movie> mov = new HashMap<Integer, Movie>();
		if(movieFilename.equals(null)) {
			return null;
		}
		else {
			BufferedReader reader = null;
			File file = new File(movieFilename);
			try {
				reader = new BufferedReader(new InputStreamReader(new FileInputStream(file)));
				String line = null;
				int first = 0;
				while((line = reader.readLine())!=null) {
					if(line.isEmpty()) continue;
					if(first!=0) {
						Pattern pattern = Pattern.compile("(\\d+),\\\"?(.+) \\((\\d+)\\)\\\"?,(.+)") ;
						Matcher check = pattern.matcher(line);
							if(check.find()) {
								String[] tagg = check.group(4).split("\\|");
								String title = check.group(2);
								int mid = Integer.parseInt(check.group(1));
								Movie a = new Movie(mid,title,Integer.parseInt(check.group(3)));
								for(int i=0;i<tagg.length;i++) {
									a.addTag(tagg[i]);
								}
								mov.put(mid, a);
							}
					}
					else {
						first = 111;
					}
				}
				reader.close();
			}
			catch(FileNotFoundException e) {
				e.printStackTrace();
			}
			catch(IOException e) {
				e.printStackTrace();
			}
			return mov;
		}	
	}
	
	@Override
	public Map<Integer, User> loadUsers(String ratingFilename) {
		// TODO Auto-generated method stub
		Map<Integer, User> use = new HashMap<Integer, User>();
		if(ratingFilename.equals(null)) {
			return null;
		}
		else {
			BufferedReader reader = null;
			File file = new File(ratingFilename);
			try {
				reader = new BufferedReader(new InputStreamReader(new FileInputStream(file)));
				String line = null;
				int first = 0;
				while((line = reader.readLine())!=null) {
					if(line.isEmpty()) continue;
					if(first!=0) {
						String[] word = line.split(",");
						int movid = Integer.parseInt(word[1]);
						int uid = Integer.parseInt(word[0]);
						if(use.get(uid)==null) {
							Double userate = Double.parseDouble(word[2]);
							Long usetime = Long.parseLong(word[3]);
							Movie moviee = datamov.get(movid);
							User userid = new User(uid);
							userid.addRating(moviee,userate,usetime);
							use.put(uid,userid);
						}
						else {
							Double userate = Double.parseDouble(word[2]);
							Long usetime = Long.parseLong(word[3]);
							Movie moviee = datamov.get(movid);
							use.get(uid).addRating(moviee,userate,usetime);
						}
					}
					else {
						first = 111;
					}
				}
				reader.close();
			}
			catch(FileNotFoundException e) {
				e.printStackTrace();
			}
			catch(IOException e) {
				e.printStackTrace();
			}
			return use;
		}
	}

	Map<Integer, Movie> datamov = new HashMap<Integer, Movie>();
	Map<Integer, User> datause = new HashMap<Integer, User>();
	@Override
	public void loadData(String movieFilename, String userFilename) {
		// TODO Auto-generated method stub
		datamov = loadMovies(movieFilename); 
		datause = loadUsers(userFilename); 
	}

	@Override
	public Map<Integer, Movie> getAllMovies() {
		// TODO Auto-generated method stub
		if(datamov.equals(null)) {
			return null;
		}
		return datamov;
	}

	@Override
	public Map<Integer, User> getAllUsers() {
		// TODO Auto-generated method stub
		if(datause.equals(null)) {
			return null;
		}
		return datause;
	}

	@Override
	public void trainModel(String modelFilename) {
		// TODO Auto-generated method stub
		if(!modelFilename.equals(null)) {
			FileWriter writer = null;
			try {
				writer = new FileWriter(modelFilename);
			} 
			catch (IOException e) {
				e.printStackTrace();
			}
			
			StringBuilder str = new StringBuilder();
			str.append("@NUM_USERS "+datause.size()+"\n");
			Map<Integer, Integer> usetrain = new TreeMap<>();
			int c1=0;
			for(Integer u: datause.keySet()) {
				usetrain.put(c1, u);
				c1++;
			}
			str.append("@USER_MAP "+usetrain+"\n");
			str.append("@NUM_MOVIES "+datamov.size()+"\n");	
			Map<Integer, Integer> movtrain = new TreeMap<>();
			Set<Integer> keyMovie = new TreeSet<>(datamov.keySet());
			int c2=0;
			for(Integer m: keyMovie) {
				movtrain.put(c2, m);
				c2++;
			}
			str.append("@MOVIE_MAP "+movtrain+"\n");
			str.append("@RATING_MATRIX\n");
			for(int i=0;i<datause.size();i++) {
				int useAt = usetrain.get(i);
				for(int j=0;j<datamov.size();j++) {
					int movAt = movtrain.get(j);
					if(datause.get(useAt).ratings.get(movAt)==null) {
						str.append("0.0 ");
					}
					else {
						str.append(datause.get(useAt).ratings.get(movAt).rating+" ");
					}
				}
				double mean = datause.get(useAt).getMeanRating();
				str.append(mean);
				str.append("\n");
			}
			str.append("@USERSIM_MATRIX\n");
			for(User x: datause.values()) {
				for(User y: datause.values()) {
					if(x.uid==y.uid) {
						str.append("1.0 ");
					}
					else {
						Set<Integer> allrate = new HashSet<>(datause.get(x.uid).ratings.keySet());
                        allrate.retainAll(datause.get(y.uid).ratings.keySet());
                        double meanofx = x.getMeanRating(), meanofy = y.getMeanRating();
                        double sigmaup = 0,sigmadown1 = 0,sigmadown2 = 0;
                        for(int i : allrate) {
                            double xrate = x.ratings.get(i).rating ;
                            double yrate = y.ratings.get(i).rating ;
                            sigmaup += (xrate - meanofx)*(yrate - meanofy);
                            sigmadown1 += Math.pow(xrate - meanofx, 2);
                            sigmadown2 += Math.pow(yrate - meanofy, 2);
                        }
                        double down = Math.sqrt(sigmadown1)*Math.sqrt(sigmadown2);
                        if(down == 0) {
                            str.append("0.0 ");
                        }
                        else {
                            str.append(sigmaup/down + " ");
                        }
					}
				}
				str.append("\n");
			}
			BufferedWriter wtr = new BufferedWriter(writer);	
			try {
				wtr.write(str.toString());
				wtr.close();
			}
			catch(IOException e) {
				e.printStackTrace();
			}	
		}
	}

	BiMap<Integer,Integer> usermap = HashBiMap.create();
	BiMap<Integer,Integer> movmap = HashBiMap.create();
	double[][] rater ;
	double[][] sim ;
	@Override
	public void loadModel(String modelFilename) {
		// TODO Auto-generated method stub
		rater = new double[datause.size()][datamov.size()+1];
		sim = new double[datause.size()][datause.size()];
		BufferedReader loader = null;
		File file = new File(modelFilename);
		int cnt = 0, count = 0; 
		try {
			loader = new BufferedReader(new InputStreamReader(new FileInputStream(file)));
			String line = null;
			while((line = loader.readLine())!=null) {
				Pattern dotpatt = Pattern.compile("(\\d+.\\d+\\s)");
				Matcher ratem = dotpatt.matcher(line);
				if(line.isEmpty()) continue;
					if(line.contains("@USER_MAP")) {
						Pattern eqpatt = Pattern.compile("(\\d+)=(\\d+)");
						Matcher usem = eqpatt.matcher(line);
						while(usem.find()) {
							if(!usem.equals(null)) {
								int usm1 = Integer.parseInt(usem.group(1)),usm2 = Integer.parseInt(usem.group(2));
								usermap.put(usm1, usm2);
							}
						}
					}
					else if(line.contains("@MOVIE_MAP")) {
						Pattern eqpatt = Pattern.compile("(\\d+)=(\\d+)");
						Matcher movm = eqpatt.matcher(line);
						while(movm.find()) {
							if(!movm.equals(null)) {
								int usm1 = Integer.parseInt(movm.group(1)),usm2 = Integer.parseInt(movm.group(2));
								movmap.put(usm1, usm2);
							}
						}
					}
					else if(line.contains("@MOVIES_MAP")) {
						Pattern eqpatt = Pattern.compile("(\\d+)=(\\d+)");
						Matcher movm = eqpatt.matcher(line);
						while(movm.find()) {
							if(!movm.equals(null)) {
								int usm1 = Integer.parseInt(movm.group(1)),usm2 = Integer.parseInt(movm.group(2));
								movmap.put(usm1, usm2);
							}
						}
					}
					else if(ratem.find()) {
						String[] group = line.split(" ");
						if(group.length==datamov.size()+1) {
							for(int j=0;j<group.length;j++) {
								rater[cnt][j] = Double.parseDouble(group[j]);
							}
							cnt++;
						}
						if(group.length==datause.size()) {
							for(int i=0;i<group.length;i++) {
								sim[count][i] = Double.parseDouble(group[i]);
							}
							count++;
						}
					}	
				}
				loader.close();
			}
		catch(FileNotFoundException e) {
			e.printStackTrace();
		}
		catch(IOException e) {
			e.printStackTrace();
		}
	}

	@Override
	public double predict(Movie m, User u) {
		// TODO Auto-generated method stub
		double sigup = 0.0, sigdown = 0.0;
		if(usermap.containsValue(u.uid)) {
			int uposition = usermap.inverse().get(u.uid);
			int mposition = movmap.inverse().get(m.mid);
			double umeanrating = rater[uposition][rater[uposition].length-1];
			for(int i=0;i<rater.length;i++) {
				if(i == uposition) continue;
				if(rater[i][mposition] != 0.0) {
					double similarity = sim[i][uposition];
					double merate = rater[i][rater[i].length-1];
					double ra = rater[i][mposition];
					sigup += similarity*(ra-merate);
					sigdown += Math.abs(similarity);
				}
			}
			
			if(sigdown==0 || sigup == 0) {
					return umeanrating;
			}
			double predicted = umeanrating+(sigup/sigdown);
			if(predicted>5.0) {
				predicted = 5.0;
			}
			else if(predicted<0.5) {
				predicted = 0.5;
			}
			return predicted;	
		}
		else if(!usermap.containsValue(u.uid)) {
			return u.getMeanRating();
		}
		else {
			return 0;
		}	
	}
	
	@Override
	public List<MovieItem> recommend(User u, int fromYear, int toYear, int K) {
		// TODO Auto-generated method stub
		List<MovieItem> recommended = new ArrayList<MovieItem>();
		for(Movie rr: datamov.values()) {
			if(rr.year<=toYear&&rr.year>=fromYear) {
					recommended.add(new MovieItem(rr, predict(rr,u)));
			}	
		}
		Collections.sort(recommended);
		if(recommended.size()< K) {
			return recommended;
		}
		else {
			return recommended.subList(0,K);
		}
	}
}
