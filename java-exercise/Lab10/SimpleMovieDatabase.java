import java.util.Map;
import java.util.*;
import java.io.*;

//import org.apache.commons.io.FileUtils;

public class SimpleMovieDatabase {
	public Map<Integer, Movie> movies = new HashMap<Integer, Movie>();
	
	public void importMovies(String movieFilename)
	{	//YOUR CODE GOES HERE
		BufferedReader reader = null;
		File file = new File(movieFilename);
		try {
			reader = new BufferedReader(new InputStreamReader(new FileInputStream(file)));
			String line =null;
			while((line = reader.readLine())!=null) {
				line = line.trim();
				if(line.isEmpty()) continue;
				//Checking valid data
				String[] blabla = line.split(",",2);
				String checkID = "[0-9]+";
				if(blabla[0].matches(checkID)) {
					if(blabla[1].charAt(0)!=' ') {
						movies.put(Integer.parseInt(blabla[0]), new Movie(Integer.parseInt(blabla[0]),blabla[1]));
					}
				}
			}
		}
		catch(FileNotFoundException e) {
			e.printStackTrace();
		}
		catch(IOException e) {
			e.printStackTrace();
		}
		//seem like close file
		finally {
			try {
				if(reader!=null) {
					reader.close();
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
		}
	}
	
	
	//-------------------BONUS----------------------
	public List<Movie> searchMovies(String query) 
	{
		//YOUR BONUS CODE GOES HERE
		ArrayList<Movie> movieWith = new ArrayList<Movie>();
		for (Movie mov: movies.values()) {
			String checkMov = mov.title.toLowerCase();
			if(checkMov.contains(query.toLowerCase())) {
				movieWith.add(mov);
			}
		}
		return movieWith;
	}
	
	public List<Movie> getMoviesByTag(String tag)
	{
		//YOUR BONUS CODE GOES HERE
		ArrayList<Movie> tagWith = new ArrayList<Movie>();
		for (Movie ta: movies.values()) {
			for(String checkTag: ta.tags) {
				if(checkTag.contains(tag)) {
					tagWith.add(ta);
				}
			}
		}
		return tagWith;
	}
	
	
	public static void main(String[] args)
	{
		SimpleMovieDatabase mdb = new SimpleMovieDatabase();
		mdb.importMovies("D:\\jamn\\ICT 1yrs 2nd semester\\JAVA\\Lab10kaa\\src\\lab10_movies.txt");
		System.out.println("Done importing "+mdb.movies.size()+" movies");
		int[] mids = new int[]{139747, 141432, 139415, 139620, 141305};
		for(int mid: mids)
		{
			System.out.println("Retrieving movie ID "+mid+": "+mdb.movies.get(mid));
		}
		
		//Uncomment for bonus
		System.out.println("\n////////////////////////// BONUS ///////////////////////////////");
		String[] queries = new String[]{"america", "thai", "thailand"};
		for(String query: queries)
		{
			System.out.println("Results for movies that match: "+query);
			for(Movie m: mdb.searchMovies(query))
			{
				System.out.println("\t"+m);
			}
			System.out.println();
		}
		
		String[] tags = new String[]{"Musical", "Action", "Thriller"};
		for(String tag: tags)
		{
			System.out.println("Results for movies in category: "+tag);
			for(Movie m: mdb.getMoviesByTag(tag))
			{
				System.out.println("\t"+m);
			}
			System.out.println();
		}
		
		
	}

}
