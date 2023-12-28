class a {
    public static void f1() {
        System.out.println("f1");
    }

    public void fun(int x) {
        System.out.println("jai shree ram");
    }
}

class b extends a {
    public static void f1() {
        System.out.println("f2");

    }

    public void fun() {
        System.out.println("jiggi");
    }

}

public class jiggi {

    public static void main(String[] args) {
        a obj = new b();
        obj.f1();
        obj.fun(5);
        // obj.fun();

    }
}
