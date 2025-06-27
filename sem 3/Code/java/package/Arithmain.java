/*wap in java that having 4 package (folder)
named addition ,subtraction, multiplication 
and division all packages having a program with 
name add, sub , mul and div classes 
i.e. class add have calAdd() and dispAdd() 
from main class user have to give two values and it show all calculation*/

import java.util.Scanner;
import Addition.Add;
import Subtraction.Sub;
import Multiple.Mul;
import Division.Div;

public class Arithmain 
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter a Number:");
		int x = scanner.nextInt();
		System.out.println("Enter a Number:");
		int y = scanner.nextInt();
		
		Add a = new Add();
		a.calAdd(x,y);
		a.dispAdd();
		
		Sub s = new Sub();
		s.calSub(x,y);
		s.dispSub();
		
		Mul m = new Mul();
		m.calMul(x,y);
		m.dispMul();
		
		Div d = new Div();
		d.calDiv(x,y);
		d.dispDiv();
		
		scanner.close();
	}
}