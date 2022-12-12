import java.util.Scanner;
public class weight
{
	public static void productCheck(int w8)
	{
	    if(w8<100)
	    {
	        throw new ArithmeticException("Product is Invalid");
	    }
	    else
	    {
	        System.out.print("Product is Valid");
	    }
	}
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.printf("Enter the weight of the product : ");
		int w8 = in.nextInt();
        in.close();
	    productCheck(w8);
	    System.out.println(" :" + w8);
	}
}
