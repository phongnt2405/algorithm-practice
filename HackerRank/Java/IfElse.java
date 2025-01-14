import java.util.Scanner;

public class IfElse {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int n = scanner.nextInt();

		if (n > 20 && n % 2 == 0) System.out.print("Not Weird");
		else System.out.print(n % 2 == 0 ? "Not Weird" : "Weird");
	}
}