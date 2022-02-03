import java.util.*;

public class ToH3 {
	
	public static int x;
	public static Stack<Integer>[] group = new Stack[4];
	
	public static void main(String[] args) {
		group[1] = new Stack<Integer>();
		group[2] = new Stack<Integer>();
        group[3] = new Stack<Integer>();
        x=3;
		tower(x);
	}
	
	public static void tower(int num) {
		for(int i=num;i>0;i--) {
			group[1].push(i);
		}
		show();
		move(num,1,2,3);
	}
	
	public static void move(int a,int b,int c,int d) {
		if(a>0) {
			move(a-1,b,d,c);
			int e = group[b].pop();
			group[d].push(e);
			show();
			move(a-1,c,b,d);
		}
	}
	
	public static void show() {
		System.out.println(" s1  s2  s3 ");
		for(int i=x-1;i>=0;i--) {
			String t1=" ", t2=" " , t3=" ";
			try{
                t1 = String.valueOf(group[1].get(i));
            }
            catch (Exception e){
            }    
            try{
                t2 = String.valueOf(group[2].get(i));
            }
            catch(Exception e){
            }
            try{
                t3 = String.valueOf(group[3].get(i));
            }
            catch (Exception e){
            }
			System.out.println(" "+t1+"   "+t2+"   "+t3);
		}
		System.out.println("\n");
	}
	
}
