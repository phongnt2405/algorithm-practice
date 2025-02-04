#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n, m;
  std::cin >> n >> m;

  std::vector<std::vector<int>> vec1(n, std::vector<int>(n));
  std::vector<std::vector<int>> vec2(m, std::vector<int>(m));

  for (auto& x : vec1) 
    for (int& y : x) 
      std::cin >> y;

  for (auto& x : vec2) 
    for (int& y : x) 
      std::cin >> y;

}
