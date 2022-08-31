import java.util.Scanner;

public class weekdays {

    public static void main(String[] args) {

        String[] arr = {"Monday","Tuesday", "Wednesday", "Thursday" ,"friday", "Saturday", "Sunday"};
        
        Scanner scan = new Scanner(System.in);
        System.out.print("Select the day of week: ");

        int num = scan.nextInt();

        scan.close();
        
        System.out.printf("the day on %dth day of week is %s\n",num, arr[num-1]);

    }
}
