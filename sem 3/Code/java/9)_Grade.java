/* Write a java program to find out students result/grade using IF condition*/
import java.util.Scanner;
class Grade {
    public static void main(String[] args) {
        Scanner Result = new Scanner(System.in);

        System.out.print("Enter the student's exam score (out of 100): ");
        int score = Result.nextInt();

        char grade;
        if (score >= 90 && score <= 100) {
            grade = 'A';
        } else if (score >= 80 && score < 90) {
            grade = 'B';
        } else if (score >= 70 && score < 80) {
            grade = 'C';
        } else if (score >= 60 && score < 70) {
            grade = 'D';
        } else {
            grade = 'F';
        } 

        System.out.println("Student's grade: " + grade);

        Result.close();
    }
}
