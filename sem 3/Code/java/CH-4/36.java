import java.util.Calendar;

class CalendarInfo {
    public static void main(String[] args) {
        // Create a default calendar instance
        Calendar calendar = Calendar.getInstance();

        // Get and display information from the calendar
        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH) + 1; // Month is 0-based, so we add 1
        int day = calendar.get(Calendar.DAY_OF_MONTH);
        int hour = calendar.get(Calendar.HOUR_OF_DAY); // 24-hour format
        int minute = calendar.get(Calendar.MINUTE);
        int second = calendar.get(Calendar.SECOND);
        int dayOfWeek = calendar.get(Calendar.DAY_OF_WEEK);

        // Display the calendar information
        System.out.println("Current Calendar Information:");
        System.out.println("Year: " + year);
        System.out.println("Month: " + month);
        System.out.println("Day: " + day);
        System.out.println("Hour: " + hour);
        System.out.println("Minute: " + minute);
        System.out.println("Second: " + second);
        System.out.println("Day of Week: " + dayOfWeek); // 1 = Sunday, 2 = Monday, ..., 7 = Saturday
    }
}