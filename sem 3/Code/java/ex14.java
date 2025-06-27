class ex14
{
	void sum(int a,int b){System.out.println(a+b);}
	void sum(double a,double b,double c){System.out.println(a+b+c);}
	
	
	public static void main(String[] args)
	{
		ex14 obj=new ex14();
		obj.sum(10.5,10.20,10.1);
		obj.sum(20,20);
	}
}
