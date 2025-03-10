#include <iostream>
#include <vector>

bool solve(std::vector<int>& ar, int n) {
  int count = 0;
  bool ok = true;
  // even
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0 && ar[i] + 1 % 2 != 0) {
      ok = false;
      break;
    }
  }

  if (ok) {
    count++;
    std::cout << "check1" << "\n";
  }
  ok = true;

  // odd
  for (int i = 0; i < n; i++) {
    if (i % 2 != 0 && ar[i] + 1 % 2 == 0) {
      ok = false;
      break;
    }
  }

  if (ok) {
    count++;
    std::cout << "check2" << "\n"; 
  }
  return count >= 1 ? true : false;
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
    for (int& x : ar) std::cin >> x;

    bool ans = solve(ar, n);
    std::cout << (ans ? "Yes" : "No") << "\n";
  }
}
