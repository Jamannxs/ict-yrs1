import java.util.ArrayList;
public class PremiumMember extends Member {
	
	private double fee;
	private double Family_FEE = 80.00;
	private ArrayList<String> family;
	
	public PremiumMember(String email,String password,double fee) {
		super(email, password);
		this.fee = fee;
		this.family = new ArrayList<String>();
	}
	
	int appear = 0;
	@Override
	public void printMemberInfo() {
		System.out.println("----PREMIUM MEMBER----");
		System.out.println("Member fee: "+this.fee);
		super.printMemberInfo();
		System.out.println("--------------------");
		if(appear==0) {
			appear++;
		}
		else {
			System.out.println("List of Family");
		}
		for(int i=0;i<family.size();i++) {
			System.out.print(family.get(i));
				System.out.print(", ");
	
		}
		System.out.print("\n");
	}
	
	public boolean addFamily(String username) {
		if(!username.isEmpty()&&family.size()<2) {
			family.add(username);
			System.out.println(username+" is added successfully.");
			return true;
		}
		else{
			System.out.println("user: "+username+" cannot be added, the Family user is reached the limit");
			return false;
		}
	}
	
	public boolean removeFamily(String username) {
		int found = 1;
		for(int i=0;i<family.size();i++) {
			if(family.get(i).equals(username)) {
				family.remove(i);
				found = 2;
				System.out.println(username+" is removed successfully.");
			}
		}
		if(found!=2) {
			System.out.println("user: "+username+" does not exist and cannot be removed.");
			return false;
		}
		return true;
	}
	
	public double getMonthlyBill() {
		return this.fee + (this.Family_FEE*family.size());
	}
}
