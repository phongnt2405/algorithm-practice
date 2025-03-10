#include <iostream>
#include <vector>

bool all_neg(std::vector<int>& ar) {
  for (int val : ar) 
    if (val > 0) 
      return false;
  return true;
}

int solve(const std::vector<int>& ar, const int n) {
  if (all_neg(ar)) {
    int total = 0;
    for (int val : ar)
      total += -val;
    return total;
  }

  
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;
  
  while (t--) {
    int n;
    std::cin >> n;

    std::vector<int> ar(n);
    for (auto& x : ar) std::cin >> x;

  }
}
