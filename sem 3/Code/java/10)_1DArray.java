/*Write a java program of 1D array*/
import java.util.Scanner;
class Array {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] a = new int[5];

        System.out.println("Enter 5 elements for the array:");
        for (int i = 0; i < 5; i++) {
            System.out.print("Enter Array At " + i + ": ");
            a[i] = scanner.nextInt();
        }

        System.out.println("\nElements of the array:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Element at index " + i + ": " + a[i]);
        }
        
        scanner.close();
    }
}
