#include <iostream>
#include <string>

int solve(const std::string s1, const std::string s2) {
  int total = 0;
  int n = s1.length();
  int m = s2.length();
  int i = 0;

  for (; i < std::min(n, m); i++) {
    if (s1[i] == s2[i]) total++;
    else break;
  }
  if (total != 0) total++;

  return total + (n - i) + (m - i);
}

int main() {
  int t; 
  std::cin >> t;

  while (t--) {
    std::string s1, s2;
    std::cin >> s1 >> s2;

    int ans = solve(s1, s2);
    std::cout << ans << "\n";
  }
}
