import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) {
    FastScanner in = new FastScanner();
    PrintWriter out = new PrintWriter(System.out);

    int n = in.nextInt(), d = in.nextInt();
    int[] A = new int[n];
    int[] B = new int[n];

    for (int i = 0; i < n; i++) {
      A[i] = in.nextInt();
      B[i] = in.nextInt();
    }

    for (int i = 0; i < d; i++) {
      int ans = getMax(A, B, n);
      out.println(ans);
    }
    out.close();
  }

  static int getMax(int[] A, int[] B, int n) {
    int maxVal = 0;
    for (int i = 0; i < n; i++) {
      B[i]++;
      maxVal = Math.max(maxVal, A[i] * B[i]);
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
        if (st.hasMoreTokens()) {
          s = st.nextToken("\n");
        } else {
          s = br.readLine();
        }
      } catch (IOException e) {
        e.printStackTrace();
      }
      return s;
    }
  }
}