public class generalisingexceptiionclass {

    public static void main(String args[]) {
        try {
            String s = null;
            int a;
            System.out.println("Before the exception");
            System.out.println(s.length());

        } catch (Exception e) {
            System.out.println("Inside the Exception block");
            System.out.println("error:" + e.getMessage());
        }

    }
}
