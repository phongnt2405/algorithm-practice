#include <iostream>
#include <string>
#include <set>

int main() {
  std::string s;
  std::cin >> s;

  std::set<char> seen(s.begin(), s.end());
  std::string ans = std::string(seen.begin(), seen.end());

  std::cout << ((ans.length() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
}
