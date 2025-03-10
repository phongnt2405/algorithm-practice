#include <iostream>
#include <vector>

bool solve(std::vector<int>& ar, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (ar[i] >= ar[i + 1]) return false;
  }
  return true;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  std::vector<int> ar(n);
  for (int& x : ar) {
    std::cin >> x;
  }

  bool ans = solve(ar, n);
  std::cout << (ans ? "Yes" : "No");
}
