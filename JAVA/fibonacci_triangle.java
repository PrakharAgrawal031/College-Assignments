public class fibonacci_triangle
{
	public static void main(String[] args) {
	 int count1 =1;
	 int count2 = 1, temp;
	 System.out.println("0 ");
	 System.out.printf("1 1 \n");
		for (int i = 3;i<5 ;i++)
		{
		 for(int j = 0; j<i; j++)
		 {
		  temp = count2;
		  count2=count2+count1;
		  count1 = temp;
		  System.out.printf("%d ", count2);
		 }
		 System.out.printf("\n");
		}
	}
}
