import java.util.*;

public class FullBinaryTreeTester {
	public static void inOrderTraverse(Node root)
	{
		//YOUR CODE GOES HERE
		if(root == null) {
			return ;
		}
		inOrderTraverse(root.left);
		System.out.print(" "+root.id);
		inOrderTraverse(root.right);
	}
	
	public static boolean isFullBinTree(Node root)
	{	//YOUR CODE GOES HERE
		if(root == null) {
			return true;
		}
		if(root.left==null&&root.right==null) {
			return true;
		}
		if(root.left!=null&&root.right!=null) {
			return isFullBinTree(root.left)&&isFullBinTree(root.right);
		}
		return false;
	}
	
	public static void normalTester()
	{
		Node[] ts = new Node[7];
		int count = 0;
		ts[count++] = null;
		ts[count++] = new Node(16, null, null);
		
		ts[count++] = new Node(16, new Node(14, null, null), null);
		
		ts[count++] = new Node(1, new Node(3, new Node(6, null, null), new Node(7, null, null)), 
				new Node(4, new Node(8, null, null), new Node(10, null, null)));
		
		ts[count++] = new Node(1, new Node(3, null, null), 
				new Node(4, new Node(8, null, null), new Node(10, null, null)));
		
		ts[count++] = new Node(1, new Node(3, new Node(6, null, null), null), 
				new Node(4, new Node(8, null, null), new Node(10, null, null)));
		
		ts[count++] = new Node(1, new Node(3, new Node(6, null, null), new Node(7, null, null)), 
				null);
		
		for(int i = 0; i < ts.length; i++)
		{
			System.out.print("[T"+i+"] in-order: ");
			inOrderTraverse(ts[i]);
			System.out.println("\n[T"+i+"] is"+(isFullBinTree(ts[i])?" ":" NOT ")+"a full binary tree.\n");
		}
		
	}
	
	
	/**************BONUS STARTS***************/
	public static List<Integer> od = new ArrayList<Integer>();
	
	public static void Order(Node root)
	{
		if(root == null) {
			return ;
		}
		else {
			Order(root.left);
			od.add(root.id);
			Order(root.right);
		}
		
	}
	
	public static void printBinTree(Node root)
	{	//YOUR BONUS CODE GOES HERE
		if(root == null) {
			return ;
		}		
		//Object[] collect = Node.orderr.toArray();
		int middle = Math.round(od.size()/2);
		
		FullBinaryTreeTester.printSpace(middle);
		System.out.println(findMiddle(od));
		List<Integer> h = od.subList(0,middle); 
		List<Integer> t = od.subList(middle+1,od.size());
			FullBinaryTreeTester.printSpace(middle/2);
		System.out.print(findMiddle(h));
			FullBinaryTreeTester.printSpace(middle);
		System.out.println(findMiddle(t));
		
		
		Stack<Node> stack = new Stack<Node>(); 
		stack.push(root); 
		while (!stack.isEmpty()) { 
			Node n = stack.pop(); 
			if (n.right != null) { 
				stack.add(n.right); 
			} 
			if (n.left != null) { 
				stack.add(n.left); 
			} 
			if (n.left == null && n.right == null) { 
				System.out.printf("%d ", n.id); 
			} 
		}
	}
	
	public static void printSpace(int count) {
		for (int i = 0; i < count; i++) {
			System.out.print(" ");
		}
	}
	
	public static int findMiddle(List<Integer> arr) {
		return (int)arr.get(Math.round(arr.size()/2));
	}
	
	public static Node getBinSearchTree(Node root)
	{	//YOUR BONUS CODE GOES HERE

		List<Integer> ad = new ArrayList<Integer>(Node.orderr);
	
			int count = 0;
			Stack<Node> stack = new Stack<Node>(); 
			stack.push(root); 
			while (!stack.isEmpty()) { 
				Node n = stack.pop(); 
				if (n.right != null) { 
					stack.add(n.right); 
				} 
				if (n.left != null) { 
					stack.add(n.left); 
				} 
				if (n.left == null && n.right == null) { 
					n.id = ad.get(count);
					count += 2;
				} 
			}
		printBinTree(root);
			
//		System.out.print("After:");
//		Iterator<Integer> inter = Node.orderr.iterator();
//		while(inter.hasNext()) {
//			System.out.print(" "+inter.next()); 
//		}
		
		return null;
	}
	public static void bonusTester()
	{
		Node t = new Node(1, new Node(3, new Node(6, null, null), new Node(7, null, null)), 
				new Node(4, new Node(8, null, null), new Node(10, null, null)));
		System.out.println("Before Transforming: ");
		Order(t);
		printBinTree(t);
		System.out.println("\nAfter Transforming: ");
		printBinTree(getBinSearchTree(t));
	}
	/**************BONUS ENDS***************/
	
	
	
	public static void main(String[] args)
	{
		//normalTester();
		//Uncomment for bonus
		bonusTester();
	}
	
	//ยังแกเไม่เสร็จนะคะ
}
