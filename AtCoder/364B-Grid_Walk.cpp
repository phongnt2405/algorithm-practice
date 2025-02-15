#include <iostream>
#include <vector>
#include <string>

// void print_current(std::vector<std::vector<char>>& arr, int h, int w, int si, int sj) {
//   for (int i = 0; i < h; i++) {
//     for (int j = 0; j < w; j++) {
//       if (i == si && j == sj) {
//         std::cout << "X ";
//       } else {
//         std::cout << arr[i][j] << " ";
//       }
//     }
//     std::cout << "\n";
//   }
// }

void solve(std::vector<std::vector<char>>& arr, int h, int w, int &si, int &sj, std::string s) {
  si--; sj--;

  for (char c : s) {
    switch (c) {
      case 'U': {
        if (si - 1 >= 0 && arr[si - 1][sj] != '#') si--;
        break;
      }
      case 'D': {
        if (si + 1 < h && arr[si + 1][sj] != '#')  si++;
        break;
      }
      case 'L': {
        if (sj - 1 >= 0 && arr[si][sj - 1] != '#') sj--;
        break;
      }
      case 'R': {
        if (sj + 1 < w && arr[si][sj + 1] != '#') sj++;
        break;
      }
    }

  }

  std::cout << si + 1 << " " << sj + 1 << "\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int h, w, si, sj;
  std::cin >> h >> w >> si >> sj;
  std::vector<std::vector<char>> arr(h, std::vector<char>(w));

  for (int i = 0; i < h; i++) {
    std::string line;
    std::cin >> line;
    for (int j = 0; j < w; j++) {
      arr[i][j] = line[j];
    }
  }

  std::string s;
  std::cin >> s;

  solve(arr, h, w, si, sj, s);
}
