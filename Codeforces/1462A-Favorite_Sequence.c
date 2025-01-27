#include <stdio.h>
#include <stdlib.h>

int* solve(int arr[], int n) {
  int *ans = (int*) malloc(n * sizeof(int));
  int left = 0, right = n - 1, i = 0;

  while (i < n) {
    ans[i++] = arr[left];
    if (i < n) ans[i++] = arr[right];

    left++; right--;
  }
  return ans
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    int *ans = solve(arr, n);
    for (int i = 0; i < n; i++) {
      printf("%d ", ans[i]);
    }

    printf("\n");
    free(ans);
  }
}
