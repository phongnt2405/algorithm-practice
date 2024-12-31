#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int a, b;
  scanf("%d %d", &a, &b);

  int prev = a;
  int total = b;

  for (int i = 1; i < n; i++) {
    scanf("%d %d", &a, &b);
    total -= a - prev;
    if (total < 0) total = 0;
    total += b;
    prev = a;
  }
  printf("%d", total);
}