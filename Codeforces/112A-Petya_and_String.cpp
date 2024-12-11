#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  std::transform(s1.begin(), s1.end(), s1.begin(),
               [](unsigned char c){ return std::tolower(c); });

  std::transform(s2.begin(), s2.end(), s2.begin(),
               [](unsigned char c){ return std::tolower(c); });

  if (s1 < s2) std::cout << -1;
  else if (s1 > s2) std::cout << 1;
  else std::cout << 0;
}
