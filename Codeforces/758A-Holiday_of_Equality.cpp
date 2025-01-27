#include <iostream>
#include <vector>
#include <algorithm>

int solve(std::vector<int>& arr) {
  auto it = std::max_element(arr.begin(), arr.end());
  int max_val = *it;

  int count = 0;
  for (int val : arr) {
    count += abs(max_val - val);
  }
  return count;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  std::vector<int> arr(n);
  for (int& x : arr) 
    std::cin >> x;

  int ans = solve(arr);
  std::cout << ans; 
}
