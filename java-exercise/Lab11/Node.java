import java.util.TreeSet;

public class Node {
	public int id;
	public Node left = null;
	public Node right = null;
	public static TreeSet<Integer> orderr = new TreeSet<Integer>();
	
	public Node(int _id, Node _left, Node _right)
	{	id = _id;
		left = _left;
		right = _right;
		orderr.add(id);
	}
	
	public Node(int _id) {
		id = _id;
		orderr.add(id);
	}
}
