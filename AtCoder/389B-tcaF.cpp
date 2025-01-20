#include <iostream>

int main() {
  long long x;
  std::cin >> x;

  long long total = 1;
  size_t i = 1;

  while (total * static_cast<long long>(i) <= x) {
    total *= i;
    i++; 
  }

  std::cout << i - 1;
}
