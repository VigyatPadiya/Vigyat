
/*write a program to get such values from user like name age mobile number email id and city and all details print in a proper format.*/
import java.util.Scanner;

class Details {
	public static void main(String[] args) {
		Scanner Details = new Scanner(System.in);

		System.out.println("Enter your Name:");
		String name = Details.nextLine();

		System.out.println("Enter your Age:");
		int age = Details.nextInt();

		System.out.println("Enter Mobile Number");
		int mn = Details.nextInt();

		System.out.println("Enter your Enrollment:");
		int Enroll = Details.nextInt();

		System.out.println("Hello! " + name);
		System.out.println("Your age is " + age);
		System.out.println("Your Mobile Number is " + mn);
		System.out.println("Your Enrollment Number is " + Enroll);

		Details.close();
	}
}