#include <iostream>
#include <string>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    std::string s;
    std::cin >> s;

    int n = s.length();
    std::string ans = "";
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'q') ans += 'p';
      else if (s[i] == 'p') ans += 'q';
      else ans += 'w';
    }

    std::cout << ans << "\n";
  }
}
