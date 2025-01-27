#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string s;
  std::cin >> s;

  int n = s.length();
  int count = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') {
          count++;
        }
      }
    }
  }  

  std::cout << count << "\n";
}
