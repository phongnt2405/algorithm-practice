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
    int m = in.nextInt();

    int[][] S = new int[n][n];
    int[][] T = new int[m][m];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        S[i][j] = in.nextInt();
      }
    }
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < m; j++) {
        T[i][j] = in.nextInt();
      }
    }

    int a = 0, b = 0;

    out.close();
  }

  static void solve(int[][] S, int[][] T, int n, int m) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (S[i][j] == T[0][0]) {

        }
      }
    } 
  }

  static boolean check(int[][] S, int[][] T, int n, int m, int a, int b) {
    for (int i = a; i < m; i++) {
      for (int j = b; j < m; j++) {
        
      }
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

