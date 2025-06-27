
/*Write  a  java  program  to  find  ODD  or  EVEN  number  using command  line argument  */
import java.util.Scanner;

class OddEven {
    public static void main(String[] args) {
        Scanner oddeven = new Scanner(System.in);

        System.out.println("Enter a number: ");
        int num = oddeven.nextInt();

        if (num % 2 == 0) {
            System.out.println(num + " is an even number.");
        } else {
            System.out.println(num + " is an odd number.");
        }

        oddeven.close();
    }
}
