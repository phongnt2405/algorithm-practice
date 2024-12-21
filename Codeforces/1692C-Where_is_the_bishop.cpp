#include <iostream>
#include <array>
#include <string>

bool check(std::array<std::array<char, 8>, 8> grid, int n, int i) {
  int count = 0;
  for (int j = 0; j < n; j++) {
    if (grid[i - 1][j] == '#') count++;
  }

  if (count != 2) return false;
  count = 0;
  for (int j = 0; j < n; j++) {
    if (grid[i + 1][j] == '#') count++;
  }

  if (count != 2) return false;
  return true;
}

void solve(std::array<std::array<char, 8>, 8> grid, int& a, int& b) {  
  int n = 8;
  for (int i = 1; i < n - 1; i++) {
    int count = 0;
    int curr = 0;
    for (int j = 0; j < n; j++) {
      if (grid[i][j] == '#') {
        count++;
        curr = j;
      }

      if (count == 1 && check(grid, n, i)) {
        a = i + 1; b = curr + 1;
        return;
      }
    }
  }
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    std::array<std::array<char, 8>, 8> grid;
    int n = 8;

    for (int i = 0; i < n; i++) {
      std::string s;
      std::cin >> s;

      for (int j = 0; j < n; j++) {
        grid[i][j] = s[j];
      }
    }

    int a, b;
    solve(grid, a, b);
    std::cout << a << " " << b << "\n";
  }
}
