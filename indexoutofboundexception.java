class abc {
    public static void generate() {
        int a[] = new int[4];
        a[12] = 10; // Accessing a valid index (0 to 3)
        System.out.println("Generated successfully");
    }
}

public class indexoutofboundexception {
    public static void main(String args[]) {
        abc obj = new abc(); // Instantiate an object of the abc class
        // try {

        // obj.generate();
        // } catch (ArrayIndexOutOfBoundsException e) {
        // System.out.println("Array index out of bounds");
        // }
        obj.generate();
    }
}
