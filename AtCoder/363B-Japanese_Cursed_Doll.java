import java.io.PrintWriter;
import java.util.Scanner;

public class Main {

  private static final Scanner in = new Scanner(System.in);
  private static final PrintWriter out = new PrintWriter(System.out);

  public static void main(String[] args) {
    int n = in.nextInt();
    int t = in.nextInt();
    int p = in.nextInt();

    int[] arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = in.nextInt();
    }

    int count = 0;
    while (countVal(arr, t) < p) {
      addOne(arr, n);
      count++;
    }

    out.println(count);
    in.close();
    out.close();
  }

  static void addOne(int[] arr, int n) {
    for (int i = 0; i < n; i++) arr[i]++;
  }

  static int countVal(int[] arr, int t) {
    int count = 0;
    for (int val : arr) if (val >= t) count++;
    return count;
  }
}
