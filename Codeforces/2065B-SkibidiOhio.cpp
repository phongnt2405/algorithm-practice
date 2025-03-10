#include <iostream>
#include <string>

int solve(std::string s, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) return 1;
  }
  return n;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int t;
  std::cin >> t;

  while (t--) {
    std::string s;
    std::cin >> s;

    int ans = solve(s, s.length());
    std::cout << ans << "\n";
  }
}
