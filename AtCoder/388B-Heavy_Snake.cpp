#include <iostream>
#include <vector>

int solve(std::vector<int>& A, std::vector<int>& B, const size_t n) {
  int max_val = 0;
    for (size_t i = 0; i < n; i++) {
      B[i]++;
      max_val = std::max(max_val, A[i] * B[i]);
    }
  return max_val;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  size_t n, d;
  std::cin >> n >> d;

  std::vector<int> A(n), B(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> A[i];
    std::cin >> B[i];
  }

  for (size_t i = 1; i <= d; i++) {
    int ans = solve(A, B, n);
    std::cout << ans << "\n";
  }
}
