#include <stdio.h>

int binary_search(int A[], int n, int val) {
  int left = 0, right = n;
  while (left < right) {
    int mid = (left + right) / 2;

    if (A[mid] < val) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return left;
}

int main() {
  int n;
  scanf("%d", &n);

  int A[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    int j = binary_search(A, n, 2 * A[i]);

    if (j <= i) j = i + 1;
    if (j < n) count += (n - j);     
  }

  printf("%d\n", count);
}