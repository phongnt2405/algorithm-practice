import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {
  public static void main(String[] args) {
    FastScanner in = new FastScanner();
    PrintWriter out = new PrintWriter(System.out);

    String[] s1 = { "N", "W", "NE", "NW" };
    String[] s2 = { "S", "E", "SW", "SE" };

    String s = in.next();

    String ans = solve(s1, s2, s);
    out.println(ans);
    out.close();
  }

  static String solve(String[] s1, String[] s2, String s) {
    for (int i = 0; i < 4; i++) {
      if (s.equals(s1[i])) {
        return s2[i];
      } else if (s.equals(s2[i])) {
        return s1[i];
      }
    }
    return "";
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