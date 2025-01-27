import java.io.PrintWriter;
import java.util.Scanner;

public class Main {

  static final char[] row = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
  static final char[] col = { '1', '2', '3', '4', '5', '6', '7', '8' };

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    PrintWriter out = new PrintWriter(System.out);

    int t = in.nextInt();
    in.nextLine();

    while (t-- > 0) {
      String s = in.next();

      solve(out, s);
      out.println();
    }
    in.close();
    out.close();
  }

  static void solve(PrintWriter out, String s) {
    for (char ch : row) {
      if (ch != s.charAt(0)) {
        out.printf("%c%c ", ch, s.charAt(1));
      }
    }

    for (char ch : col) {
      if (ch != s.charAt(1)) {
        out.printf("%c%c ", s.charAt(0), ch);
      }
    }
  }
}
