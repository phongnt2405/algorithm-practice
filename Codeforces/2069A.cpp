#include <iostream>
#include <vector>

bool solve(std::vector<int>& arr, int n) {
  for (int i = 0; i + 2 < n; i++) {
    if (arr[i] && !arr[i + 1] && arr[i + 2]) {
      return false;
    }
  }
  return true;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;
    n -= 2;

    std::vector<int> arr(n);
    for (int& x : arr) 
      std::cin >> x;

    bool ans = solve(arr, n);
    std::cout << (ans ? "YES" : "NO") << "\n";
  }
}
