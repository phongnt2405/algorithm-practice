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
        if (j - i == k - j) {
          if (s[i] == 'A' && s[j] == 'B' && s[k] == 'C') {
            count++;
          }
        }
      }
    }
  }

  std::cout << count;
}
