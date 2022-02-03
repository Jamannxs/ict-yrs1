
public class Song {
	private String title;
	private double duration;
	
	public Song(String title, double duration) {
		this.title=title;
		this.duration=duration;
	}
	
	public String getTitle() {
		return this.title;
	}
	
	public double getDuration() {
		return this.duration;
	}
	
	public int getDurationInSec() {
		int a;
		double b;
		a = (int) this.duration;
		b = ((this.duration-(double)a)*100);
		a = (a*60)+(int)Math.round(b);
		return  a;
	}
	
	public String toString() {
		return this.title+": "+this.duration+" minutes ("+getDurationInSec()+" seconds)";
	}
	
}
