class OuterClass
{
	private int outerVariable = 10;
	
	public class InnerClass
	{
		private int innerVariable=20;
			
		public void printVariable()
		{
			System.out.println("The Outer Variable is "+outerVariable);
			System.out.println("The Inner Variable is "+innerVariable);
		}
	}
	public static void main(String[] args)
	{
		OuterClass outer = new OuterClass();
		OuterClass.InnerClass inner = outer.new InnerClass();
		inner.printVariable();
	}
}