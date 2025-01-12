import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int t = scanner.nextInt();

    while (t-- > 0) {
      int n = scanner.nextInt(), m = scanner.nextInt();
      int[][] A = new int[n][m];

      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j ++) {
          A[i][j] = scanner.nextInt();
        }
      }

      System.out.println(solve(A, n, m));
    }
    scanner.close();
  

  private static int solve(int[][] A, int n, int m) {
    int max = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int total = calc(A, n, m, i, j);
        max = Math.max(max, total);
      }
    }
    return max;
  }
  
  private static int calc(int[][] A, int n, int m, int x, int y) {
    int sum = 0;
    int i = x, j = y;
    while (i >= 0 && i < n && j >= 0 && j < m) {
      sum += A[i][j];
      i--; j--;
    }

    i = x; j = y;
    while (i >= 0 && i < n && j >= 0 && j < m) {
      sum += A[i][j];
      i++; j--;
    }

    i = x; j = y;
    while (i >= 0 && i < n && j >= 0 && j < m) {
      sum += A[i][j];
      i--; j++;
    }

    i = x; j = y;
    while (i >= 0 && i < n && j >= 0 && j < m) {
      sum += A[i][j];
      i++; j++;
    }

    sum -= A[x][y] * 3;
    return sum;
  }
}
