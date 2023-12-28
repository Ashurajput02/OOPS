public class throwinganexception {
    public static void main(String args[]) {
        try {
            throw new Exception("ANVIKSHA JHANGKID");
        } catch (Exception obj) {
            System.out.println("Caught the exception");
            System.out.println("finally at the end love not found");
            System.out.println("error:" + obj.getMessage() + " not found");

        }
    }
}
