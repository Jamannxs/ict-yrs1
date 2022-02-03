public class MyDate {
	private int year;
	private int month;
	private int day;
	private int objectNumber;
	public static int objectCounter = 0;
	public static String[] strMonths = {"January","Febuary","March","April","May","June","July","August","September","October","November","December"};

	MyDate(){
		this.year = 1900;
		this.month = 1;
		this.day = 1;
		objectCounter++;
		this.objectNumber = objectCounter;
	}
	
	MyDate(int aYear, int aMonth, int aDay){
		this.year = aYear;
		this.month = aMonth;
		this.day = aDay;
		objectCounter++;
		this.objectNumber = objectCounter;
	}
	
	public int getObjectNumber() {
		return this.objectNumber;
	}
	
	public void setDate(int aYear, int aMonth, int aDay) {
		this.year = aYear;
		this.month = aMonth;
		this.day = aDay;
	}
	
	public void setYear(int aYear) {
		this.year = aYear;
	}
	
	public void setMonth(int aMonth) {
		this.month = aMonth;
	}
	
	public void setDay(int aDay) {
		this.day = aDay;
	}
	
	public int getYear() {
		return this.year;
	}
	
	public int getMonth() {
		return this.month;
	}
	
	public int getDay() {
		return this.day;
	}
	
	public String toString() {
		return this.day+" "+strMonths[this.month-1]+" "+this.year;
	}
	
	public static boolean isLeapYear(int year) {
		if(year%4!=0) {
			return false;
		}
		else if(year%100!=0) {
			return true;
		}
		else if(year%400!=0) {
			return false;
		}
		else {
			return true;
		}
	}
	
	public MyDate nextDay() {
		if(this.month==12&&this.day==31) {
			this.year = this.year + 1;
			this.month = 1;
			this.day = 1;
		}
		else {
			if(this.month==4||this.month==6||this.month==9||this.month==11) {
				if(this.day == 30) {
					this.month = this.month + 1;
					this.day = 1;
				}
				else {
					this.day = this.day + 1;
				}
			}
			else if(this.month!=2) {
				if(this.day==31) {
					this.month = this.month + 1;
					this.day = 1;
				}
				else {
					this.day = this.day + 1;
				}
			}
			else {
				if(isLeapYear(this.year)&&this.day==29) {
					this.month = this.month + 1;
					this.day = 1;
				}
				else if(!isLeapYear(this.year)&&this.day==28) {
					this.month = this.month + 1;
					this.day = 1;
				}
				else {
					this.day = this.day + 1;
				}
			}
		}
		return this;
	}
	
	public MyDate nextMonth() {
		if(this.month==12) {
			this.month = 1;
			this.year++;
		}
		else {
			if(this.month==3||this.month==5||this.month==7||this.month==8||this.month==10) {
				if(this.day==31) {
					this.day = 30;
					this.month++;
				}
				else {
					this.month++;
				}
			}
			else if(this.month==1) {
				if(this.day>28) {
					if(isLeapYear(this.year)&&this.day>=29) {
						this.day = 29;
					}
					else {
						this.day = 28;
					}
					this.month++;
				}
				else {
					this.month++;
				}
			}
			else {
				this.month++;
			}
		}
		return this;
	}
	
	public MyDate nextYear() {
		if(isLeapYear(this.year)&&this.month==2&&this.day==29) {
			this.day = 28;
		}
		this.year++;
		return this;
	}
	
	public MyDate previousDay() {
		if(this.month==1&&this.day==1) {
				this.month = 12;
				this.day = 31;
				this.year--;
		}
		else {
			if(this.month==5||this.month==7||this.month==10||this.month==12) {
				if(this.day==1) {
					this.month--;
					this.day = 30;
				}
				else {
					this.day--;
				}
			}
			else if(this.month!=3) {
				if(this.day==1) {
					this.month--;
					this.day = 31;
				}
				else {
					this.day--;
				}
			}
			else {
				if(this.day==1&&isLeapYear(this.year)) {
					this.month--;
					this.day = 29;
				}
				else if(this.day==1) {
					this.month--;
					this.day = 28;
				}
				else {
					this.day--;
				}
			}
		}
		return this;
	}
	
	public MyDate previousMonth() {
		if(this.month==1) {
			this.month = 12;
			this.year--;
		}
		else {
			if(this.month==5||this.month==7||this.month==12||this.month==10) {
				if(this.day==31) {
					this.day = 1;
					this.month--;
				}
				else {
					this.month--;
				}
			}
			else if(this.month==3) {
				if(this.day>28) {
					if(isLeapYear(this.year)&&this.day>=29) {
						this.day = 29;
					}
					else {
						this.day = 28;
					}
					this.month--;
				}
				else {
					this.month--;
				}
			}
			else {
				this.month--;
			}
		}
		return this;
	}
	
	public MyDate previousYear() {
		if(isLeapYear(this.year)&&this.month==2&&this.day==29) {
			this.day = 28;
		}
		this.year--;
		return this;
	}
	
	public static int yearDiff(MyDate start, MyDate end) {
		if(end.year>=start.year) {
			if(end.month>=start.month) {
				if(end.day>=start.day) {
					return end.year-start.year;
				}
				return end.year-start.year-1;
			}
			return end.year-start.year-1;
		}
		return -1;
	}
	
}
