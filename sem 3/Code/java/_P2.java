/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
class P2
{
	public static void main(String[] args)
	{
		int i=1,j=1;
		while(i<=5)
		{
			while(j<=i)
			{
				System.out.print(j+" ");
				j++;
			}
			System.out.println(" ");
			i++;
			j=1;
		}
	}
}