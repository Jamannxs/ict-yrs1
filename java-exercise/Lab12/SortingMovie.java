import java.util.ArrayList;

public class SortingMovie {

	public static void main(String[] args) {
		ArrayList<Movie> movieList = new ArrayList<Movie>();
		movieList.add(new Movie(1, "The Intern", 2009));
		movieList.add(new Movie(2, "The Gift", 2009));
		movieList.add(new Movie(3, "The Lost Room", 2009));
		movieList.add(new Movie(4, "The Gift", 2012));
		movieList.add(new Movie(5, "Pasolini", 2012));
		movieList.add(new Movie(6, "The Intern", 2009));
		movieList.add(new Movie(7, "American Ultra", 2019));
		movieList.add(new Movie(8, "Sweet Red Bean Paste", 2019));
		
		System.out.println("== Unsorted movie list ==");
		for(int i=0;i<movieList.size();i++) {
			Movie call = movieList.get(i);
			System.out.println(call.toString());
		}
		System.out.println("\n== Sorted movie list (ascending) ==");
		sort(movieList);
	}
	
	public static void sort (ArrayList<Movie>  movies) {
		// YOUR CODE GOES HERE
		Movie temp;
		for(int i=0;i<movies.size();i++) {
			for(int j=0;j<movies.size();j++) {
				if(movies.get(i).compareTo(movies.get(j))<0) {
					temp = movies.get(i);
					movies.set(i,movies.get(j));
					movies.set(j,temp);
					
				}
			}
		}
		for(int i=0;i<movies.size();i++) {
			Movie tell = movies.get(i);
			System.out.println(tell.toString());
		}		
	}

}
