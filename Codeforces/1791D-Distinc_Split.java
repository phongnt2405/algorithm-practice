import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {

  public static void main(String[] args) {
    FastScanner in = new FastScanner();
    PrintWriter out = new PrintWriter(System.out);

    int t = in.nextInt();
    while (t-- > 0) {
      int n = in.nextInt();
      String s = in.nextLine().trim();

      int ans = solve(s, n);
      out.println(ans);
    }
    out.close();
  }

  static int solve(String s, int n) {
    int[] left = new int[n + 1];
    int[] right = new int[n + 1];

    boolean[] seenLeft = new boolean[26];
    int count = 0;
    for (int i = 0; i < n; i++) {
      char c = s.charAt(i);
      int idx = c - 'a';
      if (!seenLeft[idx]) {
        seenLeft[idx] = true;
        count++;
      }
      left[i + 1] = count;
    }

    boolean[] seenRight = new boolean[26];
    count = 0;
    for (int i = n - 1; i >= 0; i--) {
      char c = s.charAt(i);
      int idx = c - 'a';
      if (!seenRight[idx]) {
        seenRight[idx] = true;
        count++;
      }
      right[i] = count;
    }

    int maxVal = 0;
    for (int i = 1; i < n; i++) {
      maxVal = Math.max(maxVal, left[i] + right[i]);
    }
    return maxVal;
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
