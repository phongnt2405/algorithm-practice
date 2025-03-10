#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char** make(int n) {
  char **arr = malloc(n * sizeof(char*));
  for (int i = 0; i < n; i++) {
    arr[i] = malloc(n * sizeof(char));
  }

  for (int i = 0; i < n; i++) {
    scanf("%s", arr[i]);
  }
  return arr;
}

void freeAll(char **arr, int n) {
  for (int i = 0; i < n; i++) {
    free(arr[i]);
  }
  free(arr);
}

void solve(char **S, char **T, int n, int m) {
  for (int a = 0; a <= n - m; a++) {
    for (int b = 0; b <= n - m; b++) {
      bool check = true;
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
          if (S[a + i][b + j] != T[i][j]) {
            check = false;
            break;
          }
        }
      }
      if (check) {
        printf("%d %d\n", a + 1, b + 1);
        return;
      }
    }
  }
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  char **S = make(n);
  char **T = make(m);

  solve(S, T, n, m);
  freeAll(S, n);
  freeAll(T, m);
}
