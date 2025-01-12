#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void sort(char *arr, int n) {
  for (int i = 1; i < n; i++) {
    char key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j] = arr[j + 1];
      j--;
    }
    arr[j + 1] = key;
  }
}

const char* solve(char *s, int n) {
  if (n != 5) return "NO";
  char check[] = "Timur";
  
  return strcmp(sort(s, n), sort(check, n)) == 0 ? "YES" : "NO";
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n;
    scanf("%d", &n);

    char *s = (char*) malloc(n * sizeof(char));
    scanf("%s", s);

    printf("%s\n", solve(s, n));
    free(s);
  }
}