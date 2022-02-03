import java.util.Scanner;
public class Palindrome {
	public static void main(String[] args) {
		System.out.print("Enter a word or phrase to check if it is a palindrome: ");
		Scanner input = new Scanner(System.in);
		String blabla = input.nextLine();
		input.close();
		char arr[] = blabla.toCharArray();
		String normal="",reverse="";
		
		for(int i=0; i<blabla.length();i++) {
			if((arr[i]>='A'&&arr[i]<='Z')||(arr[i]>='a'&&arr[i]<='z')) {
				normal = normal + arr[i];
			}
		}
		for(int i=blabla.length()-1; i>=0;i--) {
			if((arr[i]>='A'&&arr[i]<='Z')||(arr[i]>='a'&&arr[i]<='z')) {
				reverse = reverse + arr[i];
			}
		}
		boolean isWord=false;
		for(int i=0; i<blabla.length();i++) {
			if((arr[i]>='A'&&arr[i]<='Z')||(arr[i]>='a'&&arr[i]<='z')) {
				isWord=true;
			}
			else {
				isWord=false;
				break;
			}
		}
		if(isWord) {
			if(normal.toLowerCase().equals(reverse.toLowerCase())) {
				System.out.println("The input word \" "+blabla+" \" is a palindrome");
			}
			else {
				System.out.println("The input word \" "+blabla+" \" is not a palindrome");
			}
		}
		else {
			if(normal.toLowerCase().equals(reverse.toLowerCase())) {
				System.out.println("The input phrase \" "+blabla+" \" is a palindrome");
			}
			else {
				System.out.println("The input phrase \" "+blabla+" \" is not a palindrome");
			}
		}
		
	}
}
