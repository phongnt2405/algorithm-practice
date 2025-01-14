import java.util.Scanner;

public class Stdin_and_Stdout1 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

  	int a = scanner.nextInt();
		int b = scanner.nextInt();
		int c = scanner.nextInt();

		System.out.printf("%d\n%d\n%d", a, b, c);
	}
}