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

    int n = in.nextInt();
    char[][] ar = new char[n][n];
    for (char[] row : ar) {
      Arrays.fill(row, '.');
    }

    print(ar);
    out.close();
  }

  static void print(char[][] ar) {
    for (char[] row : ar) {
      for (char c : row) {
        System.out.print(c);
      }
      System.out.println();
    }
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

