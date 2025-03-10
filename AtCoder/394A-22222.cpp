#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  std::string s;
  std::cin >> s;

  std::string ans = "";
  int n = s.length();

  for (int i = 0; i < n; i++) {
    if (s[i] == '2') {
      ans += s[i];
    }
  }

  std::cout << ans;
}
