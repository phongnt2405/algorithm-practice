#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int P[n], Q[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &P[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &Q[i]);
  }

  int ans[n];
  for (int i = 0; i < n; i++) {
    ans[Q[i] - 1] = Q[P[i] - 1];
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", ans[i]);
  }
}
