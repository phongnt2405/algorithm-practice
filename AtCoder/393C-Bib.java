import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    int n = scanner.nextInt();
    int[] P = new int[n];
    int[] Q = new int[n];

    for (int i = 0; i < n; i++) {
      P[i] = scanner.nextInt();
    }
    for (int i = 0; i < n; i++) {
      Q[i] = scanner.nextInt();
    }

    int[] ans = solve(P, Q, n);
    for (int i = 0; i < n; i++) {
      System.out.printf("%d ", ans[i]);
    }
    scanner.close();
  }

  private static int[] solve(int[] P, int[] Q, int n) {
    int[] ans = new int[n];
    for (int i = 0; i < n; i++) {
      ans[Q[i] - 1] = Q[P[i] - 1];
    }
    return ans;
  }
}
