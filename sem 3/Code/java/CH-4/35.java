import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

class DateFormatExample {
    public static void main(String[] args) {
        // Get the current date
        LocalDate currentDate = LocalDate.now();
        
        // Define different date formats
        DateTimeFormatter format1 = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        DateTimeFormatter format2 = DateTimeFormatter.ofPattern("MM/dd/yyyy");
        DateTimeFormatter format3 = DateTimeFormatter.ofPattern("yyyy/MM/dd");
        DateTimeFormatter format4 = DateTimeFormatter.ofPattern("EEEE, MMMM dd, yyyy"); // Full day and month names

        // Format the current date
        String formattedDate1 = currentDate.format(format1);
        String formattedDate2 = currentDate.format(format2);
        String formattedDate3 = currentDate.format(format3);
        String formattedDate4 = currentDate.format(format4);

        // Display the formatted dates
        System.out.println("Current Date in different formats:");
        System.out.println("Format 1 (dd-MM-yyyy): " + formattedDate1);
        System.out.println("Format 2 (MM/dd/yyyy): " + formattedDate2);
        System.out.println("Format 3 (yyyy/MM/dd): " + formattedDate3);
        System.out.println("Format 4 (EEEE, MMMM dd, yyyy): " + formattedDate4);
    }
}