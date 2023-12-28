
class ash {

    public static int x;

    public ash() {
        x = 9;
    }
}

class jig extends ash {

    public jig() {
        super();
        System.out.println("the value of x is equal to " + x);
    }
}

public class statickeywordjava {

    public static void main(String args[]) {

        jig ob = new jig();

    }
}