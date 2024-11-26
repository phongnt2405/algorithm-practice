#include <iostream>
#include <algorithm>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int l, r, k;
    std::cin >> l >> r >> k;
        
    std::cout << std::max(r / k - l + 1, 0) << "\n";
  }
}
