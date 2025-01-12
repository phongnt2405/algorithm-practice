#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    char s1[4], s2[4];
    scanf("%s %s", s1, s2);

    swap(&s1[0], &s2[0]);
    printf("%s %s\n", s1, s2);
  }
}