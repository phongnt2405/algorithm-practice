import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int t = scanner.nextInt();

    while (t-- > 0) {
      int n = scanner.nextInt();
      int m = scanner.nextInt();

      String[] A = new String[n];
      for (int i = 0; i < n; i++) {
        A[i] = scanner.next();
      }

      System.out.println(solve(A, n, m));
    }

    scanner.close();
  }

  private static int solve(String[] A, int n, int m) {
    if (n == 2) {
      String s1 = A[0];
      String s2 = A[1];
      int total = 0;

      for (int i = 0; i < m; i++) {
        total += Math.abs(s1.charAt(i) - s2.charAt(i)); 
      }
      return total;
    }

    int min = Integer.MAX_VALUE;

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int total = 0;
        for (int k = 0; k < m; k++) {
          total += Math.abs(A[i].charAt(k) - A[j].charAt(k));
        }
        if (total < min) min = total;
      }
    }

    return min;
  }
}
