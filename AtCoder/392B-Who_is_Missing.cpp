#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solve(std::vector<int>& vec, int n, int m) {
  std::sort(vec.begin(), vec.end());
  std::vector<int> ans;

  for (int i = 1; i <= n; i++) {
    bool match = false;
    for (int j = 0; j < m; j++) {
      if (i == vec[j]) {
        match = true;
        break;
      }
    }
    if (!match) ans.push_back(i);
  }
  return ans;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n, m;
  std::cin >> n >> m;
  std::vector<int> vec(m);

  for (int& x : vec) {
    std::cin >> x;
  }

  std::vector<int> ans = solve(vec, n, m);
  
  std::cout << ans.size() << "\n";
  for (int val : ans) {
    std::cout << val << " ";
  }
}
