package exceptionhandling;

public class useoffinally {

    public void ash() {
        try {
            System.out.println(3 / 0);

        } catch (NullPointerException e) {
            System.out.println(e.getMessage());
            System.out.println("hello");

        } finally {
            System.out.println("ashu rajput was here");
        }
    }

}
