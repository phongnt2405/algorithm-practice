#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::cout << (n % 3 == 0 ? "Second" : "First") << "\n";
  }
}
