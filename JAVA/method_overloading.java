import java.util.Scanner;

public class method_overloading {

	private static void overloadedmethod(int num1) {
		System.out.printf("The number is: %d", num1);
	}

	private static void overloadedmethod(int num1, int num2) {
		System.out.printf("The sum of provided 2 numbers is: %d\n", num1 + num2);
	}

	private static void overloadedmethod(String name) {
		System.out.println("The name you provided was " + name + "\n");
	}

	public static void main(String[] args) {

		String name;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the num 1\n");
		int num1 = sc.nextInt();
		System.out.println("Enter the num 2");
		int num2 = sc.nextInt();
		System.out.println("Enter the name");
		name = sc.next();
		System.out.println();
		sc.close();
		overloadedmethod(num1);
		overloadedmethod(num1, num2);
		overloadedmethod(name);

	}
}
