#include <stdio.h>
#include <stdlib.h>

int** init(int n, int m) {
  int **arr = (int**) malloc(n * sizeof(int*));
  for (int i = 0; i < n; i++) {
    arr[i] = (int*) malloc(m * sizeof(int));
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  return arr;
}

void del(int **arr, int n) {
  for (int i = 0; i < n; i++) {
    free(arr[i]);
  }
  free(arr);
}

int calc(int **arr, int n, int m, int x, int y) {
  int total = 0;
  int i = x, j = y; 
  while (i >= 0 && i < n && j >= 0 && j < m) {
    total += arr[i][j];
    i--; j--;
  }

  i = x; j = y;
  while (i >= 0 && i < n && j >= 0 && j < m) {
    total += arr[i][j];
    i--; j++;
  }

  i = x; j = y;
  while (i >= 0 && i < n && j >= 0 && j < m) {
    total += arr[i][j];
    i++; j--;
  }

  i = x; j = y;
  while (i >= 0 && i < n && j >= 0 && j < m) {
    total += arr[i][j];
    i++; j++;
  }

  total -= arr[x][y] * 3;
  return total;
}

int solve(int **arr, int n, int m) {
  int max = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int total = calc(arr, n, m, i, j);
      if (total > max) max = total;
    }
  }
  return max;
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n, m;
    scanf("%d %d", &n, &m);

    int **arr = init(n, m);
    printf("%d\n", solve(arr, n, m));

    del(arr, n);
  }
}
