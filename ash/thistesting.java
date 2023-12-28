package ash;

class ash {
    public int a;

    public ash(int a) {
        this.a = a;

    }

    public ash(ash ab) {
        this.a = ab.a;

    }

    void show() {
        System.out.println("the value of variable a =" + a);

    }

}

public class thistesting {

    public static void main(String args[]) {
        ash obj = new ash(4);
        ash obj2;
        ash obj4 = obj;// copy constructor method 1
        obj2 = obj; // not copy constructor
        ash obj3 = new ash(obj); // copy constructor method 2
        obj2.show();
        obj3.show();
        obj4.show();

    }
}
