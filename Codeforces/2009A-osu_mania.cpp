#include <iostream>
#include <vector>
#include <string>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;
    std::vector<int> arr;

    for (int i = 0; i < n; i++) {
      std::string s;
      std::cin >> s;

      for (int j = s.length() - 1; j >= 0; j--) {
        if (s[j] == '#') {
          arr.push_back(j + 1);
        }
      }
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
      std::cout << arr[i] <<  " ";
    }
    std::cout << "\n";
  }
}