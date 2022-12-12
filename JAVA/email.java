/*Input an email form the user. You have to create a user name from email id
 * by deleting the part after "@"*/

import java.util.Scanner;
public class email {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.printf("Enter your email: ");
        String E1 = in.nextLine();
        in.close();
        int x = E1.indexOf('@');
        String username = new String();
        username = E1.substring(0, x);
        //for(int  i = 0; i<x; i++)
        //{
        //    username += E1.charAt(i);
        //}
        System.out.println("Username = " + username);
    }
}
