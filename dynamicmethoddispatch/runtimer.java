package dynamicmethoddispatch;

class A {
    int x;

    public void f1() {
        System.out.println("by class A");

    }
}

class b extends A {
    public void f1() {
        System.out.println("by class B");
        System.out.println(x);

    }
}

public class runtimer {

    public static void main(String[] args) {
        A obj = new A();
        obj.f1();

        obj = new b();
        obj.f1();

    }

}

public class runtimer {

    public static void main(String[] args) {
        A obj = new A();
        obj.f1();

        obj = new b();
        obj.f1();

    }
}