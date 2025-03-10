#include <iostream>
#include <string>
#include <vector>

std::string solve(std::vector<std::string>& s, int n) {
  for (int i = 0; i < n; i++) {
    int min = i;
    for (int j = i + 1; j < n; j++) {
      if (s[j].length() < s[min].length()) min = j;
    }
    if (min != i) std::swap(s[i], s[min]);
  }

  std::string ans = "";
  for (auto x : s) {
    ans += x;
  }
  return ans;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n;
  std::cin >> n;

  std::vector<std::string> s(n);
  for (auto& x : s) 
    std::cin >> x;

  std::string ans = solve(s, n);
  std::cout << ans;
}
