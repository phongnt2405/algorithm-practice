import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

  public static void main(String[] args) {
    FastScanner scanner = new FastScanner();

    int t = scanner.nextInt();
    while (t-- > 0) {
      int n = scanner.nextInt();
      int[] arr = new int[n];

      for (int i = 0; i < n; i++) {
        arr[i] = scanner.nextInt();
      }

      String ans = solve(arr, n);
      System.out.println(ans);
    }
  }

  private static String solve(final int[] arr, final int n) {
    int countOdd = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] % 2 != 0) {
        countOdd++;
      }
    }

    return (countOdd % 2 == 0) ? "YES" : "NO";
  }

  private static class FastScanner {

    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer("");

    String next() {
      while (!st.hasMoreTokens()) try {
        st = new StringTokenizer(br.readLine());
      } catch (IOException e) {
        e.printStackTrace();
      }
      return st.nextToken();
    }

    int nextInt() {
      return Integer.parseInt(next());
    }

    long nextLong() {
      return Long.parseLong(next());
    }

    float nextFloat() {
      return Float.parseFloat(next());
    }

    double nextDouble() {
      return Double.parseDouble(next());
    }

    String nextLine() {
      String s = "";
      try {
        return br.readLine();
      } catch (IOException e) {
        e.printStackTrace();
      }
      return "";
    }
  }
}
