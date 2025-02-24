#include <iostream>
#include <string>

int solve(std::string s, int n) {
  int count = 0;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] != s[i + 1]) count++;  
  }

  return s[0] == '1' ? count + 1 : count;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int t;
  std::cin >> t;

  while (t--) {
    int n; std::string s;
    std::cin >> n >> s;

    int ans = solve(s, n);
    std::cout << ans << "\n";
  }
}
