#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// deo giai duoc
int avg(int A[], int n) {
  int total = 0;
  for (int i = 0; i < n; i++) {
    total += A[i]; 
  }
  return (int) total / n;
}

bool check(int A[], int n) {
  for (int i = 1; i < n; i++) {
    if (A[i] != A[i - 1]) return false;
  }
  return true;
}

bool solve(int A[], int n) {
  int key = avg(A, n);

  for (int i = 1; i < n - 1; i++) {
    int a = abs(A[i - 1] - key);
    int b = abs(A[i + 1] - key);

    if (a < b) {
      A[i - 1] += a;
      A[i + 1] -= a;
    } else if (a > b) {
      A[i - 1] -= b;
      A[i + 1] += b;
    }
  } 

  return check(A, n) ? true : false;
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++) 
      scanf("%d", &A[i]);

    bool ans = solve(A, n);
    printf("%s\n", ans ? "YES" : "NO");
  } 
}
