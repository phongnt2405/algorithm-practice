#include <iostream>
#include <vector>
#include <string>
#include <array>

std::string solve(std::array<std::string, 4> s1, std::array<std::string, 4> s2, std::string s) {
  for (int i = 0; i < 4; i++) {
    if (s == s1[i]) {
      return s2[i];
    } else if (s == s2[i]) {
      return s1[i];
    }
  }
  return "";
}

int main() {
  std::array<std::string, 4> s1 = { "N", "W", "NE", "SE" };
  std::array<std::string, 4> s2 = { "S", "E", "SW", "NW" };

  std::string s;
  std::cin >> s;

  std::string ans = solve(s1, s2, s);
  std::cout << ans << "\n";
}
