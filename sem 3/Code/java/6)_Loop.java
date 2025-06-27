
/*Write a java program to get the name from user and print 10 times using loop.*/
import java.util.Scanner;

class loop {
    public static void main(String[] args) {
        Scanner loop = new Scanner(System.in);
        System.out.println("Enter Name: ");
        String name = loop.nextLine();
        for (int i = 1; i <= 10; i++) {
            System.out.println(" " + name);
        }
        loop.close();
    }
}