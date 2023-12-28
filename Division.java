import java.util.Scanner;

// Scanner is a class in java.util package to get primitive types like int, double, etc. and strings.

class Division {

    public static void main(String[] args) {

        int a, b, result;

        Scanner input = new Scanner(System.in);

        System.out.println("Input two integers");

        a = input.nextInt();

        b = input.nextInt();
        try {
            if (b == 0)
                throw new ArithmeticException("Illegal secret code");
            result = a / b;
            System.out.println("result=" + result);
        } catch (NullPointerException e) {
            System.out.print("Error: " + e.getMessage());
            System.out.println("be ready to die");

        } finally {
            System.out.println("welcome to the dark world ");
        }

        // System.out.println("Result = " + result);

    }

}