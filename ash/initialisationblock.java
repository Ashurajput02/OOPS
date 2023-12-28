package ash;

public class initialisationblock {
    int x;
    int y;
    static int jig;
    static {
        System.out.println("hey there i m static block getting executed");
        jig = 9;
    }
    {
        System.out.println("hey there i am instance block executing");
        x = 3;
        y = 5;
    }

    public static void main(String[] args) {
        initialisationblock ob = new initialisationblock();
        System.out.println("value of jig is " + jig);
        initialisationblock ob2 = new initialisationblock();

    }
}
