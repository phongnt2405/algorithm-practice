#include <iostream>
#include <array>
#include <string>

// Kiểm tra xem trên đường chéo chứa quân tượng có đúng 2 quân cờ '#' hay không
bool check(std::array<std::array<char, 8>, 8> grid, int n, int i, int j) {
  int count = 0;
  // Kiểm tra đường chéo từ trên xuống dưới, từ trái sang phải
  for (int x = i - 1, y = j - 1; x >= 0 && y >= 0; x--, y--) {
    if (grid[x][y] == '#') count++;
  }
  for (int x = i + 1, y = j + 1; x < n && y < n; x++, y++) {
    if (grid[x][y] == '#') count++;
  }
  if (count == 2) return true;

  count = 0;
  // Kiểm tra đường chéo từ trên xuống dưới, từ phải sang trái
  for (int x = i - 1, y = j + 1; x >= 0 && y < n; x--, y++) {
    if (grid[x][y] == '#') count++;
  }
  for (int x = i + 1, y = j - 1; x < n && y >= 0; x++, y--) {
    if (grid[x][y] == '#') count++;
  }
  return count == 2;
}

void solve(std::array<std::array<char, 8>, 8> grid, int& a, int& b) {  
  int n = 8;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      if (grid[i][j] == '#' && check(grid, n, i, j)) {
        a = i + 1;
        b = j + 1;
        return; // Kết thúc hàm sau khi tìm thấy quân tượng
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
