#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char** init(int n, int m) {
  char** A = (char**) malloc(n * sizeof(char*));
  for (int i = 0; i < n; i++) 
    A[i] = (char*) malloc((m + 1) * sizeof(char));

  for (int i = 0; i < n; i++) {
    fgets(A[i], m + 1, stdin);
    A[i][strcspn(A[i], "\n")] = 0;
  }
  return A;
}

void del(char **A, int n) {
  for (int i = 0; i < n; i++) 
    free(A[i]);
  free(A);
}

int solve(char **A, int n, int m) {
  if (n == 2) {
    int total = 0;
    for (int i = 0; i < m; i++) {
      total += abs(A[0][i] - A[1][i]);
    }

    return total;
  }

  int min = INT_MAX;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int total = 0;
      for (int k = 0; k < m; k++) {
        total += abs(A[i][k] - A[j][k]);
      }
      if (total < min) min = total;
    }
  }

  return min;
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n, m;
    scanf("%d %d", &n, &m);
    char **A = init(n, m);

    printf("%d\n", solve(A, n, m));
    del(A, n);
  }
}
