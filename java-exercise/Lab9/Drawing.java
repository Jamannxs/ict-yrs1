import java.awt.*; // .* means all of the library
import javax.swing.*;

public class Drawing extends JFrame{
	public Drawing() {
		setTitle("Drawing");
        setSize(600,600);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	
	public void paint(Graphics g) {
		
		g.setColor(Color.BLACK);
		g.fillRoundRect(200, 200, 200, 320, 100, 100);
		g.setColor(Color.GREEN);
		g.fillRoundRect(210, 210, 180, 300, 100, 100);
		g.setColor(Color.BLACK);
		g.fillOval(320, 310, 50, 50);
		g.setColor(Color.BLACK);
		g.fillOval(230, 310, 50, 50);
		g.setColor(Color.GRAY);
		g.fillOval(240, 320, 30, 30);
		g.setColor(Color.GRAY);
		g.fillOval(330, 320, 30, 30);
		g.setColor(Color.RED);
		g.fillOval(280, 360, 40, 40);
		
	}
	
	public static void main(String[] args) {
		Drawing t = new Drawing();
	}
}
