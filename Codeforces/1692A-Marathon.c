#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int arr[4];
    for (int i = 0; i < 4; i++) {
      scanf("%d", &arr[i]);
    }

    int key = arr[0];
    int count = 0;
    for (int i = 1; i < 4; i++) {
      if (arr[i] > key) count++;
    }

    printf("%d\n", count);
  }
}
  
