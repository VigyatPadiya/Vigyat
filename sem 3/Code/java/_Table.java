/*write a program to print table of any user given number */
import java.util.Scanner;
class table{
	public static void main(String[] args){
	
	Scanner Table = new Scanner(System.in);
	
	System.out.println("Enter a Number: ");
	int tb = Table.nextInt();
	
	int mul;
	for (int i=1;i<=10;i++){
	mul=tb*i;
	System.out.println(tb+"*"+i+"="+mul);
	}
	
	Table.close();
	}
}
	