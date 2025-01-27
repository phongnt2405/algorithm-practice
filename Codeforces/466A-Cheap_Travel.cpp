#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n, m, a, b;
  std::cin >> n >> m >> a >> b;

  int subway = (n / m) * m;
  std::cout << (n / m) + subway;
}
