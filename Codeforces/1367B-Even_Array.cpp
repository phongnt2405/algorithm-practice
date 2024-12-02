#include <iostream>
#include <vector>

int solve(const int n) {
  int a = 0, b = 0;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    if (x % 2 != i % 2) {
      if (i % 2 == 0) {
        a++;
      } else {
        b++;
      }
    }
  }
  return a != b ? -1 : a;
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    int ans = solve(n);
    std::cout << ans << "\n";
  }
}