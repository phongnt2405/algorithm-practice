#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <algorithm>

int solve(std::vector<std::string>& A, int n, int m) {
  if (n == 2) {
    int total = 0;
    for (int i = 0; i < m; i++) {
      total += abs(A[0][i] - A[1][i]);
    }
    return total;
  }

  int min = INT_MAX;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int total = 0;
      for (int k = 0; k < m; k++) {
        total += abs(A[i][k] - A[j][k]);
      }
      min = std::min(min, total);
    }
  }
  return min;
}

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> A(n);
    for (auto& x : A) 
      std::cin >> x;

    std::cout << solve(A, n, m) << "\n";
  }
}