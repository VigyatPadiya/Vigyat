
/* Write a java program to get a name from user and display on screen. */
import java.util.Scanner;

class name {
    public static void main(String[] args) {
        Scanner name = new Scanner(System.in);

        System.out.println("Enter Name:");
        String nm = name.nextLine();

        System.out.println("Hello! " + nm);
        name.close();
    }
}