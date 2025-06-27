class array
{
	public static void main(String[] args)
	{
		try
		{
			int a=50;
			int b=0;
			int c=a/b;
			System.out.println("Answer is :"+c);
			int z[] = {10,20};
			System.out.println("Value is "+z[2]);
		}	
		catch(ArithmeticException ae)
		{
			System.out.println(ae);
		}
		catch(ArrayIndexOutOfBoundsException aie)
		{
			System.out.println(aie);
		}
	}
}