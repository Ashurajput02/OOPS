public class subclassandsuperclassthrow {
    public static void main(String args[]) {
        int arr[] = new int[5];
        int abc;
        try {
            abc = 5 / 0; // will generate an arithmetic exception
            System.out.println(abc);
        } 
catch (Throwable e) {
            System.out.println("i am the parent of arithmetic exception class and exception class as well");
        }
                
        catch (ArithmeticException e) {
            System.out.println("error:" + e.getMessage());
        }
        
        catch (Exception e) {
            System.out.println("i am the parent of arithmetic exception class");
        }

        
    }
}
