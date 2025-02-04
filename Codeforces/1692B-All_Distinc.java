import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

import java.util.Arrays;

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

      int ans = solve(arr, n);
      System.out.println(ans);
    }
  }

  private static int solve(int[] arr, int n) {
    Arrays.sort(arr);
    int len = n;

    for (int i = n - 1; i >= 0; i--) {
      for (int j = 0; j < i; j++) {
        if (arr[i] == arr[j]) {
          len--;
          break;
        }
      }
    }
    return (n % 2 == 0) ? len : len - 1;
  }

  static class FastScanner {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer("");

    String next() {
      while (!st.hasMoreTokens())
        try {
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

