#include <iostream>
#include <cstdlib>
#include <vector>
#include <climits>
#include <algorithm>

bool notSorted(std::vector<int>& a, int n) {
  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) return true;
  }
  return false;
}

int solve(std::vector<int>& a, int n) {
  if (n == 1 || notSorted(a, n)) return 0;
  if (n == 2) return a[0] == a[1] ? 1 : abs(a[1] - a[0]) / 2 + 1;

  int min_ds = INT_MAX;
  for (int i = 1; i < n; i++) {
    min_ds = std::min(min_ds, abs(a[i - 1] - a[i]));
  }

  return min_ds / 2 + 1;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (auto& x : a) 
      std::cin >> x;

    int ans = solve(a, n);
    std::cout << ans << "\n"; 
  }
}
