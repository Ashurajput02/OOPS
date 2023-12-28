public class thowingownobjecttochangeerrormessage {

    public static void main(String args[]) {

        int bal = 300;
        int amt = 1000;
        try {
            if (bal < amt)
                throw new Exception("Insufficient Balance");
            bal = bal - amt;
            System.out.println("transaction succesfull");

        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("and with this the program continues");
        }
    }
}
