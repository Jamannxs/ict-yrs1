//import java.lang.*;
//import java.util.*;
import java.io.*;

public class Sorting {
	
	public static String[] read(String Filename){	
		BufferedReader reader = null;
		File file = new File(Filename);
		String[] get = null;
		try {
			reader = new BufferedReader(new InputStreamReader(new FileInputStream(file)));
			String line =null;
			while((line = reader.readLine())!=null) {
				line = line.trim();
				if(line.isEmpty()) continue;
				get = line.split(" ");
			}
		}
		catch(FileNotFoundException e) {
			e.printStackTrace();
		}
		catch(IOException e) {
			e.printStackTrace();
		}
		finally {
			try {
				if(reader!=null) {
					reader.close();
				}
			}
			catch(IOException e){
				e.printStackTrace();
			}
		}
		return get;
	}
	
	public static void print(String[] list) {
		int count = 0;
		System.out.print("[");
		for(String a: list) {
			System.out.print(a);
			if(count!=list.length-1) {
				System.out.print(", ");
			}
			count++;
		}
		System.out.println("]");
	}
	
	public static void sort(String[] list) {
		System.out.print("Original: ");
		print(list);
		for(int i=0;i<list.length;i++) {
			String temp = list[i];
			for(int j=0;j<list.length;j++) {
				if(list[i].compareTo(list[j])>0) {
					temp=list[i];
					list[i]=list[j];
					list[j]=temp;
				}
			}
			if(i>=1) {
				System.out.print("Pass "+(i)+": ");
				print(list);
			}
			
		}
	}
	
	//harry trigger jaws black academy hero mummy assassination zoo clinical
	public static void main(String[] args) {
		
		sort(read("D:\\jamn\\ICT 1yrs 2nd semester\\JAVA\\Labsibsong\\src\\Lab12_movies.txt"));
		
	}
	
	
}
