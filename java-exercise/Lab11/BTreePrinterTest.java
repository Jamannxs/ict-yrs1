
public class BTreePrinterTest {
	private static Nodeddd<Integer> test1() {
        Nodeddd<Integer> root = new Nodeddd<Integer>(2);
        Nodeddd<Integer> n11 = new Nodeddd<Integer>(7);
        Nodeddd<Integer> n12 = new Nodeddd<Integer>(5);
        Nodeddd<Integer> n21 = new Nodeddd<Integer>(2);
        Nodeddd<Integer> n22 = new Nodeddd<Integer>(6);
        Nodeddd<Integer> n23 = new Nodeddd<Integer>(3);
        Nodeddd<Integer> n24 = new Nodeddd<Integer>(6);
        Nodeddd<Integer> n31 = new Nodeddd<Integer>(5);
        Nodeddd<Integer> n32 = new Nodeddd<Integer>(8);
        Nodeddd<Integer> n33 = new Nodeddd<Integer>(4);
        Nodeddd<Integer> n34 = new Nodeddd<Integer>(5);
        Nodeddd<Integer> n35 = new Nodeddd<Integer>(8);
        Nodeddd<Integer> n36 = new Nodeddd<Integer>(4);
        Nodeddd<Integer> n37 = new Nodeddd<Integer>(5);
        Nodeddd<Integer> n38 = new Nodeddd<Integer>(8);

        root.left = n11;
        root.right = n12;

        n11.left = n21;
        n11.right = n22;
        n12.left = n23;
        n12.right = n24;

        n21.left = n31;
        n21.right = n32;
        n22.left = n33;
        n22.right = n34;
        n23.left = n35;
        n23.right = n36;
        n24.left = n37;
        n24.right = n38;

        return root;
    }

    private static Nodeddd<Integer> test2() {
        Nodeddd<Integer> root = new Nodeddd<Integer>(2);
        Nodeddd<Integer> n11 = new Nodeddd<Integer>(7);
        Nodeddd<Integer> n12 = new Nodeddd<Integer>(5);
        Nodeddd<Integer> n21 = new Nodeddd<Integer>(2);
        Nodeddd<Integer> n22 = new Nodeddd<Integer>(6);
        Nodeddd<Integer> n23 = new Nodeddd<Integer>(9);
        Nodeddd<Integer> n31 = new Nodeddd<Integer>(5);
        Nodeddd<Integer> n32 = new Nodeddd<Integer>(8);
        Nodeddd<Integer> n33 = new Nodeddd<Integer>(4);

        root.left = n11;
        root.right = n12;

        n11.left = n21;
        n11.right = n22;

        n12.right = n23;
        n22.left = n31;
        n22.right = n32;

        n23.left = n33;
        

        return root;
    }

    public static void main(String[] args) {

        BTreePrinter.printNode(test1());
        BTreePrinter.printNode(test2());

    }
}
