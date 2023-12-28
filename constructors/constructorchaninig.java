package constructors;

class a {
    int x, y;

    public a(int w, int b) {
        x = w;
        y = b;
        System.out.println("Brought to you by class A");
    }

    public a() {

        System.out.println("Brought to you by class A without any parameters");
    }
}

class b extends a {
    public b(int a, int b) {
        // by default voh super likh dega
        System.out.println("Brought to you by class B");
    }

}

class c extends b {
    public c(int a, int b) {
        this(1, 2, 3);
        System.out.println("Brought to you by class C");
    }

    public c(int x, int z, int l) {
        super(x, z);
        System.out.println("brought to you by class C without paramaters");
    }

}

public class constructorchaninig {

    public static void main(String args[]) {
        c obj = new c(1, 2);

    }
}
