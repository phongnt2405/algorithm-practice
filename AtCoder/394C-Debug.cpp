#include <iostream>
#include <string>

std::string solve(std::string s, int n) {
  int i = 1;
  while (i < n) {
    if (s[i] == 'A' && s[i - 1] == 'W') {
      s[i] = 'C';
      s[i - 1] = 'A';
      i--;
    } else i++;
  }
  return s;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  std::string s;
  std::cin >> s;

  std::string ans = solve(s, s.length());
  std::cout << ans;
}
