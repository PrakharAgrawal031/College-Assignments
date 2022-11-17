import java.util.Scanner;

class stu_data {
    int enrollnum;
    String name;

    public void getinput() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name of student : ");
        name = sc.nextLine();
        System.out.println("Enter the enrollment number of student : ");
        enrollnum = sc.nextInt();
    }

    public void show_year() {
        if (210000 <= enrollnum && enrollnum <= 211000) {
            System.out.println(name + " is in year 1");
        } else if (211000 <= enrollnum && enrollnum < 212000) {
            System.out.println(name + " is in year 2");
        } else if (212000 <= enrollnum && enrollnum < 213000) {
            System.out.println(name + " is in year 3");
        } else if (213000 <= enrollnum && enrollnum < 214000) {
            System.out.println(name + " is in year 4");
        }
    }

}

public class student_year {
    public static void main(String[] args) {
        stu_data S1 = new stu_data();
        stu_data S2 = new stu_data();
        stu_data S3 = new stu_data();

        S1.getinput();
        S2.getinput();
        S3.getinput();
        S1.show_year();
        S2.show_year();
        S3.show_year();

    }
}
