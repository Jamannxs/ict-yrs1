
public class Pentagon extends Shape {
	private double side;
	private double apothem;
	
	public Pentagon() {
		super();
	}
	
	public Pentagon(String color,double side,double apothem) {
		super(color);
		this.side = side;
		this.apothem = apothem;
	}
	
	@Override
	public double getArea() {
		return (2.5)*this.side*this.apothem;
	}
	
	public double getArea(double side,double apothem) {
		this.side = side;
		this.apothem = apothem;
		return getArea();
	}
	
	@Override
	public String toString() {
		return "Pentagon[side="+this.side+",apothem="+this.apothem+","+super.toString()+"]";
	}
}
