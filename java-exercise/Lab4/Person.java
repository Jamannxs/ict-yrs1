public class Person {
	private String firstname;
	private String lastname;
	private MyDate birthday;
	
	Person(String aFirstname, String aLastname){
		this.firstname = aFirstname;
		this.lastname = aLastname;
		this.birthday = new MyDate();
	}
	
	Person(String aFirstname, String aLastname, int aYear, int aMonth, int aDay){
		this.firstname = aFirstname;
		this.lastname = aLastname;
		this.birthday = new MyDate(aYear,aMonth,aDay);
	}
	
	public int getAge(MyDate aDate) {
		return MyDate.yearDiff(this.birthday,aDate);
	}
	
	public boolean isEligible(MyDate elecDate) {
		if(getAge(elecDate)>=18) {
			return true;
		}
		return false;
	}
	
	public void printPersonInfo() {
		System.out.println("Person: "+this.firstname+" "+this.lastname);
		System.out.println("Birthday: "+this.birthday.getDay()+" "+this.birthday.strMonths[this.birthday.getMonth()-1]+" "+this.birthday.getYear());
	}
}
