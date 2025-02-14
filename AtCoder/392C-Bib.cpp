nclude <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solve(std::vector<int>& P, std::vector<int>& Q, int n) {
  std::vector<int> ans(n);
  
  for (int i = 0; i < n; i++) {
      ans[Q[i] - 1] = Q[P[i] - 1];
    }
  return ans;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n;
  std::cin >> n;

  std::vector<int> P(n), Q(n);
  for (int& x : P) 
    std::cin >> x;
  for (int& x : Q) 
    std::cin >> x;

  std::vector<int> ans = solve(P, Q, n);
  for (int val : ans) {
      std::cout << val << " ";
    }
}

