package exceptionhandling;

class ash {
    int a = 9;

    public void print() {
        System.out.println("hello");
    }

}

public class nullpointerexception {
    public static void main(String args[]) {
        ash a;
        a = null;
        a.print();

    }
}
