#include <iostream>
#include <vector>
#include <algorithm>

int solve(std::vector<int>& arr, int n, int k) {
  std::sort(arr.begin(), arr.end(), std::greater<int>());
  int total = 0;

  for (int val : arr) {
    if (total + val <= k) total += val;
    else break;
  }
  return k - total;
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> arr(n);
    for (int& x : arr) std::cin >> x;

    int ans = solve(arr, n, k);
    std::cout << ans << "\n";
  }
}
