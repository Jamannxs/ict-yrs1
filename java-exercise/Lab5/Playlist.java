import java.util.ArrayList;
public class Playlist {
	private String name;
	private int duration;
	private ArrayList<Song> songs;
	
	public Playlist(String name) {
		songs = new ArrayList<>();
		this.name = name;
	}
	
	public void addSong(Song aSong) {
		songs.add(aSong);
	}
	
	public void addSongAtIndex(Song aSong, int index) {
		if(songs.size()>=index) {
			songs.add(index,aSong);
		}
		else {
			System.out.println("Error: Couldn't add song at index "+index);
		}
		this.duration = getPlaylistDuration();
	}
	
	public boolean removeSongByIndex(int index) {
		if(songs.size()>=index) {
			songs.remove(index);
			this.duration = getPlaylistDuration();
			return true;
		}
		else {
			System.out.println("Error: The index is invalid");
			this.duration = getPlaylistDuration();
			return false;
		}
	}	
	
	public boolean removeSongByTitle(String title) {
		int a = 0;
		for(int i=0;i<songs.size();i++) {
			Song edok = songs.get(i);
			if(title==edok.getTitle()) {
				songs.remove(i);
				a = 1;
			}	
		}
		if(a==1) {
			this.duration = getPlaylistDuration();
			return true;
		}
		else {
			System.out.println("Error: The title is not found");
			this.duration = getPlaylistDuration();
			return false;
		}
	}
	
	public void moveUp(int current) {
		Song temp ;
		temp = songs.get(current);
		songs.set(current,songs.get(current-1));
		songs.set(current-1,temp);
	}	
	
	public void moveDown(int current) {
		Song temp;
		temp = songs.get(current);
		songs.set(current,songs.get(current+1));
		songs.set(current+1,temp);
	}	
	
	public int getPlaylistDuration() {
		this.duration = 0;
		for(int i=0;i<songs.size();i++) {
			Song ehia = songs.get(i);
			this.duration = this.duration + ehia.getDurationInSec();		
		}
		return this.duration;
	}	
	
	public void showPlaylist() {
		System.out.println(this.name);
		for(int i=0;i<songs.size();i++) {
			System.out.print("["+i+"]");
			Song esus = songs.get(i);
			System.out.println(esus.toString());
		}
		System.out.println("Total duration is "+getPlaylistDuration()/60+"."+getPlaylistDuration()%60+" minutes");
	}
	
	
	
}
