import java.util.Scanner;

public class simpleinterest 
{

   public static void main(String[] args) 
   {
        

        Scanner scan = new Scanner(System.in);

        SI obj = new SI();
        System.out.println("Enter principle :");
        float principle = scan.nextFloat();
        System.out.println("Enter rate :");
        float rate = scan.nextFloat();
        System.out.println("Enter time :");
        float time = scan.nextFloat();
        scan.close();
        
        float ans = obj.math(principle, rate, time);
        System.out.printf("Answer = %f", ans);
        
    }
   
}
class SI
{
    float simpleinterest = 0;
     public float math(float princi, float rate, float time) 
    {
     simpleinterest = (princi*rate*time)/100;
     return simpleinterest;
    }
}
