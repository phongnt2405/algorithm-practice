#include <iostream>
#include <vector>
#include <string>

std::string solve(std::vector<std::string>& arr, int n) {
  for (int i = 1; i < n - 1; i++) {
    if (arr[i] == "sweet" && arr[i - 1] == "sweet") {
      return "No";
    }
  }
  return "Yes"; 
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n;
  std::cin >> n;
  std::vector<std::string> arr(n);
  
  for (auto& x : arr)
    std::cin >> x;

  std::string ans = solve(arr, n);
  std::cout << ans;
} 
