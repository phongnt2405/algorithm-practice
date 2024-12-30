#include <iostream>
#include <string>

int solve(std::string s, int n) {
  int cnt = 0, res = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] != '0') res++;
    else cnt++;
  }

  return res + (cnt % 2 == 0 ? cnt / 2 : cnt / 2 + 1);
}

int main() {
  std::string s;
  std::cin >> s;

  std::cout << "Length n = " << s.length() << "\n";

  int ans = solve(s, s.length());
  std::cout << ans;
}