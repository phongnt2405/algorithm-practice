import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

import java.util.Arrays;

public class Main {

  public static void main(String[] args) {
    FastScanner in = new FastScanner();
    PrintWriter out = new PrintWriter(System.out);

    int t = in.nextInt();
    while (t-- > 0) {
      int a = in.nextInt(), b = in.nextInt();

      int ans = solve(Math.min(a, b), Math.max(a, b));
      out.println(ans);
    }
    out.close();
  }

  static int solve(int a, int b) {
    return a == b ? 0 : Math.abs(a - b) / 10 + 1;
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

