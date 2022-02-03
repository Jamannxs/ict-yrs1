
public class FreeMember extends Member{
	
	private int FREE_LIMITED_VDOs = 3;
	private int numDownloadedVDO;
	
	public FreeMember(String email,String password){
		super(email,password);
	}
	
	@Override
	public boolean addVideo(Video vdo) {
		if(this.numDownloadedVDO!=FREE_LIMITED_VDOs) {
			super.addVideo(vdo);
			this.numDownloadedVDO++;
			return true;
		}
		else {
			System.out.println(vdo.toString());
			System.out.println("cannot be downloaded because the number of video is reaching the limit.");
			return false;
		}
	}
	
	public boolean removeVideo(Video vdo) {
		if(super.removeVideo(vdo)) {
			this.numDownloadedVDO--;
			return true;
		}
		return false;	
	}
	
	public int getNumVideo() {
		return this.numDownloadedVDO;
	}
	
	@Override
	public void printMemberInfo() {
		System.out.println("----FREE MEMBER----");
		super.printMemberInfo();
		System.out.println("--------------------");
	}
	
	

}
