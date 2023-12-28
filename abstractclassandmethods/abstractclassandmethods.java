package abstractclassandmethods;

abstract class ash {
    public int ashu;

    public abstract void jigfun();
}

class singh extends ash {
    public singh() {
        ashu = 8;
    }

    public void jigfun() {
        System.out.println("hey babe i am being overridden");
        System.out.println("the value of the variable defined in the abstract class is =" + ashu);

    }

}

public class abstractclassandmethods {
    public static void main(String[] args) {

        singh ob1 = new singh();
        ob1.jigfun();
    }

}
