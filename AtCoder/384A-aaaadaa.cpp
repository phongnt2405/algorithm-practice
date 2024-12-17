#include <iostream>
#include <string>

int main() {
  int n;
  std::cin >> n;

  char c1, c2;
  std::cin >> c1 >> c2;

  std::string s;
  std::cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != c1) s[i] = c2;
  }
  std::cout << s;
}
