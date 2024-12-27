#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool solve(char *s, int n) {
  if (n < 26) return false;

  int arr[26];
  for (int i = 0; i < 26; i++) {
    arr[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    s[i] = tolower(s[i]);
  }

  for (int i = 0; i < n; i++) {
    arr[s[i] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (arr[i] == 0) return false;
  }
  return true;
}

int main() {
  int n;
  scanf("%d", &n);

  char *s = malloc(n * sizeof(char));
  scanf("%s", s);

  bool ans = solve(s, n);
  printf("%s\n", ans ? "YES" : "NO");
  free(s);
}
