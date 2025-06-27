class array1
{
	public static void main(String[] args)
	{
		try
		{
			int a=50;
			int b=0;
			int c=a/b;
			System.out.println("Answer is :"+c);
		}	
		catch(ArithmeticException ae)
		{
			System.out.println(ae);
		}
		finally
		{
			System.out.println("Division By Zero Is Not Possible");
		}
	}
}