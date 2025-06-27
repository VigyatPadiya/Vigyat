class ThrowKey
{
    public static void main(String[] args)
    {
        try
        {
            divide(10,0);
        }catch(ArithmeticException e)
        {
            System.out.println("Message is :"+e.getMessage());
        }
    }

    public static int divide(int a,int b) throws ArithmeticException
    {
        if(b==0)
        {
            throw new ArithmeticException("Cannot Divide By Zero!");
        }
        return a/b;
    }
}
