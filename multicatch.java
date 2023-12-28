public class multicatch {
    public static void main(String args[]) {
        int arr[] = new int[5];
        int abc;
        try {
            abc = 5/0; //will generate an arithmetic exception 
            System.out.println(abc);
        } catch (Exception e) {
            System.out.println("error:" + e.getMessage());
        }
        try {
            arr[10] = 12;// will generate arrayindexoutofboundexception
        } catch (Exception a) {
            System.out.println("error in second block" + a.getMessage());
        }
    }
}
