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

    int n = 5;
    int[] arr = new int[5];
    for (int i = 0; i < n; i++) {
      arr[i] = in.nextInt();
    }
    
    out.println(solve(arr, n));
    out.close();
  }

  static String solve(int[] arr, int n) {
    int[] ans = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 4; i++) {
      int[] temp = arr.clone();
      swap(temp, i, i + 1);
      if (Arrays.equals(temp, ans)) return "Yes";
    }
    return "No";
  }

  static void swap(int[] arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
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

