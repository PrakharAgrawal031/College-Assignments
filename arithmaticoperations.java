import java.util.Scanner;

public class Main {

   public static void main(String[] args) {
        

        Scanner scan = new Scanner(System.in);

 
        System.out.println("Enter first number :");
        float num1 = scan.nextFloat();
        System.out.println("Enter second number :");
        float num2 = scan.nextFloat();
        
        scan.close();

  
        float addition 		= num1 + num2;
        float subtraction 	= num1 - num2;
        float product 	= num1 * num2;
        float quotient	= num1 / num2;
        float reminder	    = num1 % num2;
        

        System.out.printf("Addition: %f, Subtraction: %f, Product: %f, Quotient: %f, Reminder: %f", addition, subtraction, product, quotient, reminder);
        
    }
}
