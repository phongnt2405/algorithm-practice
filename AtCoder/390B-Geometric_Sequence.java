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
    int[] arr = new int[n];

    for (int i = 0; i < n; i++) {
      arr[i] = in.nextInt();
    }

    out.println(solve(arr, n));
    out.close();
  }

  static String solve(int[] arr, int n) {
    if (arr[1] - arr[0] == 1) return "No";

    if (arr[0] > arr[1]) {
      float key = (float) arr[1] / arr[0];
      for (int i = 1; i < n; i++) {
        float a = arr[i - 1];
        float b = arr[i];
        if (a * key != b) return "No";
      }
    } else {
      int key = arr[1] / arr[0];
      for (int i = 1; i < n; i++) {
        if (arr[i - 1] * key != arr[i]) return "No";
      }
    }

    return "Yes";
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

