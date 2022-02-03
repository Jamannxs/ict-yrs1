
public class Nodeddd <T extends Comparable<?>>  {
    Nodeddd<T> left, right;
    T data;
	
	public Nodeddd(T data, Nodeddd<T> _left, Nodeddd<T> _right)
	{	this.data = data;
		left = _left;
		right = _right;
	}

    public Nodeddd(T data) {
        this.data = data;
    }
}
