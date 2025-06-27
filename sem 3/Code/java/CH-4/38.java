import java.util.GregorianCalendar;
import java.util.Calendar;

class GregorianCalendarDemo {
    public static void main(String[] args) {
        // Create a GregorianCalendar instance for the current date and time
        GregorianCalendar calendar = new GregorianCalendar();

        // Display the current date and time
        System.out.println("Current Date and Time:");
        System.out.println("Year: " + calendar.get(Calendar.YEAR));
        System.out.println("Month: " + (calendar.get(Calendar.MONTH) + 1)); // Month is 0-based
        System.out.println("Day: " + calendar.get(Calendar.DAY_OF_MONTH));
        System.out.println("Hour: " + calendar.get(Calendar.HOUR_OF_DAY)); // 24-hour format
        System.out.println("Minute: " + calendar.get(Calendar.MINUTE));
        System.out.println("Second: " + calendar.get(Calendar.SECOND));
        System.out.println("Time Zone: " + calendar.getTimeZone().getDisplayName());

        // Check if a specific year is a leap year
        int yearToCheck = 2024; // Example year
        boolean isLeapYear = calendar.isLeapYear(yearToCheck);
        System.out.println(yearToCheck + " is a leap year: " + isLeapYear);
    }
}