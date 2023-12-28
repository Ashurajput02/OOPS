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
