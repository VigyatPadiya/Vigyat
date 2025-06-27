import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

class DateTimeOperations {
    public static void main(String[] args) {
        // Get the current date and time
        LocalDateTime currentDateTime = LocalDateTime.now();

        // Format the current date and time
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        String formattedDateTime = currentDateTime.format(formatter);

        // Display the current date and time
        System.out.println("Current Date and Time: " + formattedDateTime);

        // Add 5 days to the current date
        LocalDateTime futureDateTimePlus = currentDateTime.plusDays(5);
        String formattedDateTimePlus = futureDateTimePlus.format(formatter);
        System.out.println("Current Date + 5 days: " + formattedDateTimePlus);

        // Subtract 3 months from the current date
        LocalDateTime futureDateTimeMinus = currentDateTime.minusMonths(3);
        String formattedDateTimeMinus = futureDateTimeMinus.format(formatter);
        System.out.println("Current Date - 3 months: " + formattedDateTimeMinus);
    }
}