import java.util.HashSet;
import java.util.Set;
import java.util.Arrays;

public class Movie {
	public int mid = -1;
	public String title = null;
	public Set<String> tags = null;
	public Movie(int _mid, String _title)
	{
		String[] blabla2 = _title.split(",");
		mid = _mid;
		title = blabla2[0];
		String[] blabla3 = blabla2[1].split("\\|");
		tags = new HashSet<String>(Arrays.asList(blabla3));
	}
	
	
	
	public String toString()
	{
		return "[mid: "+mid+":"+title+" "+tags+"]";
	}
	
}
