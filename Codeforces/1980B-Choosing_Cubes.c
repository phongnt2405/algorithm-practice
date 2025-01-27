#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int left, int right) {
  int pivot = arr[right];
  int i = left - 1;

  for (int j = left; j < right; j++) {
    if (arr[j] >= pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }

  swap(&arr[i + 1], &arr[right]);
  return i + 1;
}

void quick_sort(int arr[], int low, int high) {
  int size = high - low + 1;
  int stack[2 * size];
  int top = -1;

  stack[++top] = high;
  stack[++top] = low;

  while (top >= 0) {
    int l = stack[top--];
    int h = stack[top--];

    if (l < h) {
      int pi = partition(arr, l, h);

      stack[++top] = h;
      stack[++top] = pi + 1;

      stack[++top] = pi - 1;
      stack[++top] = l;
    }
  }
}

const char* solve(int arr[], int n, int f, int k) {
  k--; f--;
  int x = arr[f];
  quick_sort(arr, 0, n - 1);

  if (arr[k] > x) return "No";
  else if (arr[k] < x) return "Yes";
  else return k == n - 1 || arr[k + 1] < x ? "Yes" : "Maybe";
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n, f, k;
    scanf("%d %d %d", &n, &f, &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    const char *ans = solve(arr, n, f, k);
    printf("%s\n", ans);
  }
}
