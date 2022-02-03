
public class LinearNameSearcher extends NameSearcher{

	LinearNameSearcher(String filename) {
		super(filename);
	}

	@Override
	public String find(String query) {
		// TODO Auto-generated method stub
		
		int check = 0;
		for(int i=0;i<readNames.size();i++) {
			number_of_compared++;
			if(readNames.get(i).compareTo(query.toLowerCase())==0) {
				check = i;
				return "Found: "+"'"+query+"' AT_INDEX("+(check)+")";
			}
    	}
		return "Not Found Name: "+"'"+query+"'";
	
		
	}
	
}
