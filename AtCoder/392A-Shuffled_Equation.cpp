#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int a, b, c;
  std::cin >> a >> b >> c;

  if (a * b != c && b * c != a && c * a != b) {
    std::cout << "No";
  } else {
    std::cout << "Yes";
  }
}

