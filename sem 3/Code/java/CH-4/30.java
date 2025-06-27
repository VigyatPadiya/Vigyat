class exception
{
	public static void  main(String[] args)
	{
		try 
		{
			method1();
		}
		catch (Exception e)
		{
		
		e.printStackTrace();
		}
	}
	public static void method1() throws Exception
	{
		try
		{ 
			method2();
		}
		catch(ArithmeticException e)
		{
			throw new Exception("Exception in method1",e);
		}
	}
	public static void method2()
	{
		int result = 10/0;
	}
}