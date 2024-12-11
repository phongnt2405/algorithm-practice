#include <iostream>

int main() {
  int t;
  std::cin >> t;

  int a, b;
  std::cin >> a >> b;
  int total = b, temp = a;

  for (int i = 1; i < t; i++) {
    std::cin >> a >> b;
    total -= a - temp;
    if (total < 0) total = 0;
    total += b;
    temp = a;
  }  
  std::cout << total;
}
