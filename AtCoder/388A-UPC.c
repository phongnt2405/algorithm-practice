#include <stdio.h>

const char s[] = "UPC";

int main() {
  char s1[101];
  scanf("%s", s1);

  printf("%c%s", s1[0], s);
}