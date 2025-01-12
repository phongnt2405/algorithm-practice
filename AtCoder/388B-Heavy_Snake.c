#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, d;
  scanf("%d %d", &n, &d);

  int T[n], L[n], A[n];
  for (int i = 0; i < n; i++) {
    int a, b;
    scanf("%d %d", &a, &b);
    T[i] = a; L[i] = b;
  }

  for (int i = 1; i <= d; i++) {
    int max = 0;
    for (int j = 0; j < n; j++) {
      A[j] = T[j] * (L[j] + i);
      if (A[j] > max) max = A[j];
    }
    printf("%d\n", max);
  }
}