#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  char s[n + 1];
  scanf("%s", s);

  int a = 0, b = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') a++;
    else b++;
  }

  if (a == b) printf("Friendship");
  else if (a > b) printf("Anton");
  else printf("Danik");
}
