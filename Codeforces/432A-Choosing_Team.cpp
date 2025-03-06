#include <iostream>
#include <vector>

using std::cout;
using std::cin;

int solve(std::vector<int>& ar, int n, int k) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    if (ar[i] + k <= 5) result++;
  }
  return result / 3;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int n, k;
  cin >> n >> k;
  std::vector<int> ar(n);
  for (auto& x : ar) cin >> x;

  int ans = solve(ar, n, k);
  cout << ans << "\n";
}
