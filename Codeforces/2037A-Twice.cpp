#include <iostream>
#include <vector>
#include <algorithm>

size_t solve(std::vector<int>& arr, const size_t n) {
  size_t result = 0, i = 0;
  std::sort(arr.begin(), arr.end());

  while (i < n) {
    size_t j = i + 1;
    if (arr[i] == arr[j]) {
      result++;
      i++;
    }
    i++;
  }
  return result;
}

int main() {
  size_t t;
  std::cin >> t;

  while (t--) {
    size_t n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (auto& a : arr) {
      std::cin >> a;
    }

    size_t ans = solve(arr, n);
    std::cout << ans << "\n";
  }
}
