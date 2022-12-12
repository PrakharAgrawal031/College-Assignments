import java.util.Scanner;

class right_triangle_pattern {
	public static void main(String[] args) {
		System.out.printf("Enter the number of rows: ");
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		in.close();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				System.out.printf("*");
			}
			System.out.println();
		}
	}
}