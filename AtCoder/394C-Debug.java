import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) {
    FastScanner in = new FastScanner();
    PrintWriter out = new PrintWriter(System.out);

    String s = in.next();

    String ans = solve(s.toCharArray(), s.length());
    out.println(ans);
    out.close();
  }

  static String solve(char[] s, int n) {
    int i = 1;
    while (i < n) {
      if (i > 0 && s[i] == 'A' && s[i - 1] == 'W') {
        s[i] = 'C';
        s[i - 1] = 'A';
        i--;
      } else i++;
    }
    return new String(s);
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
