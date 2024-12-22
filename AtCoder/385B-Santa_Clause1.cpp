#include <iostream>
#include <string>
#include <vector>
#include <array>

// void current(std::vector<std::vector<char>>& grid, int h, int w, int x, int y) {
//   std::cout << "Current position:\n";
//   for (int i = 0; i < h; i++) {
//     for (int j = 0; j < w; j++) {
//       if (i == x && j == y) std::cout << "X ";
//       else std::cout << grid[i][j] << " ";
//     }
//     std::cout << "\n";
//   }
// }

std::array<int, 3> solve(std::vector<std::vector<char>>& grid, std::string s, int h, int w, int x, int y) {
  int n = s.length();
  x--; y--;
  int count = 0;

  for (int i = 0; i < n; i++) {
    bool found = false;

    switch (s[i]) {
      case 'U':
        if (grid[x - 1][y] != '#') {
          x--;
          found = true;
        }
        break;

      case 'D':
        if (grid[x + 1][y] != '#') {
          x++;
          found = true;
        }
        break;

      case 'L':
        if (grid[x][y - 1] != '#') {
          y--;
          found = true;
        }
        break;

      case 'R':
        if (grid[x][y + 1] != '#') {
          y++;
          found = true;
        }
    }

    if (found && grid[x][y] == '@') {
      count++;
      grid[x][y] = '.';
    }
  }
  x++; y++;

  std::array<int, 3> result;
  result[0] = x; result[1] = y; result[2] = count;
  return result;
}

int main() {
  int h, w, x, y;
  std::cin >> h >> w >> x >> y;

  std::vector<std::vector<char>> grid(h, std::vector<char>(w));
  for (int i = 0; i < h; i++) {
    std::string line;
    std::cin >> line;

    for (int j = 0; j < w; j++) {
      grid[i][j] = line[j];
    }
  }

  std::string s;
  std::cin >> s;

  std::array<int, 3> ans = solve(grid, s, h, w, x, y);
  for (int val : ans) std::cout << val << " ";
}
