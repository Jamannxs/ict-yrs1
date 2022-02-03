
public class BinaryNameSearcher extends NameSearcher{

	BinaryNameSearcher(String filename) {
		super(filename);
		// TODO Auto-generated constructor stub
	}

	@Override
	public String find(String query) {
		// TODO Auto-generated method stub
		int check = 0;
		int left = 0, right = readNames.size()-1;
		while(left<=right) {
			number_of_compared++;
			int middle = (left+right)/2;
			if(readNames.get(middle).compareTo(query.toLowerCase())==0) {
				check = middle;
				return "Found: "+"'"+query+"' AT_INDEX("+(check)+")";
			}
			else if(readNames.get(middle).compareTo(query.toLowerCase())<0) {
				left = middle+1;
			}
			else {
				right = middle-1;
			}
		}
		return "Not Found Name: "+"'"+query+"'";
		
	}
	
}
