#include <iostream>
#include <vector>

void print(std::vector<std::vector<char>>& ar) {
  for (auto x : ar) {
    for (auto y : x) {
      std::cout << y;
    }
    std::cout << "\n";
  }
}

void make(std::vector<std::vector<char>>& ar, int x, int y, int z) {
  for (int i = y; i < z; i++) {
    
  }
}

void solve(std::vector<std::vector<char>>& ar, int n) {
  
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n;
  std::cin >> n;

  std::vector<std::vector<char>> ar(n, std::vector<char>(n, '.'));
  print(ar);
}
