
/* Write a java program to use IF Condition */
import java.util.Scanner;

class ifelse {
    public static void main(String[] args) {
        Scanner Number = new Scanner(System.in);

        System.out.println("Enter a Number: ");
        int num = Number.nextInt();

        if (num > 0) {
            System.out.println("The Number is Positive " + num);
        } else if (num < 0) {
            System.out.println("The Number is Negative " + num);
        } else {
            System.out.println("The Number is Zero " + num);
        }

        Number.close();
    }
}