import java.util.Scanner;

public class Java_Output_Formatting {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		String s1 = scanner.next();
		int n1 = scanner.nextInt();

		String s2 = scanner.next();
		int n2 = scanner.nextInt();

		String s3 = scanner.next();
		int n3 = scanner.nextInt();

		System.out.println("================================");
		System.out.printf("%s           %3d\n", s1, n1);
		System.out.printf("%s           %3d\n", s2, n2);
		System.out.printf("%s           %3d\n", s3, n3);
		System.out.println("================================");

		scanner.close();
	}
}