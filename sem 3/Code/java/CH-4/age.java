import java.util.Calendar;
import java.util.Scanner;

class AgeCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input birthdate and time from user
        System.out.println("Enter your birthdate and time (yyyy-mm-dd HH:mm:ss): ");
        String input = scanner.nextLine();
        String[] dateTimeParts = input.split(" ");
        String[] dateParts = dateTimeParts[0].split("-");
        String[] timeParts = dateTimeParts[1].split(":");

        int birthYear = Integer.parseInt(dateParts[0]);
        int birthMonth = Integer.parseInt(dateParts[1]) - 1;
        int birthDay = Integer.parseInt(dateParts[2]);
        int birthHour = Integer.parseInt(timeParts[0]);
        int birthMinute = Integer.parseInt(timeParts[1]);
        int birthSecond = Integer.parseInt(timeParts[2]);

        Calendar birthDate = Calendar.getInstance();
        birthDate.set(birthYear, birthMonth, birthDay, birthHour, birthMinute, birthSecond);
        birthDate.set(Calendar.MILLISECOND, 0); 

        Calendar now = Calendar.getInstance();
        int age = now.get(Calendar.YEAR) - birthDate.get(Calendar.YEAR);
        System.out.println("You are " + age + " years old.");

        scanner.close();
    }
}
