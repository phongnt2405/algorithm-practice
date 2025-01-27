#include <stdio.h>

int countVal(int arr[], int n, int t) {
  int count = 0;
  for (int i = 0; i < n; i++)
    if (arr[i] >= t)
      count++;
  return count;
}

void plusOne(int arr[], int n) {
  for (int i = 0; i < n; i++)
    arr[i]++;
}

int main() {
  int n, t, p;
  scanf("%d %d %d", &n, &t, &p);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count = 0;
  while (countVal(arr, n, t) < p) {
    plusOne(arr, n);
    count++;
  }

  printf("%d\n", count);
}
