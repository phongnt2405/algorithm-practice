#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;

int solve(std::vector<int>& ar, int n) {
  if (n == 1 || n == 2) return -1;
  std::sort(ar.begin(), ar.end());

  for (int i = 2; i < n; i += 3) {
    if (ar[i] == ar[i - 1] == ar[i - 2]) {
      return ar[i];
    }
  }
  return -1;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int t;
  cin >> t; 

  while (t--) {
    int n;
    cin >> n;

    std::vector<int> ar(n);
    for (auto& x : ar) cin >> x;

    int ans = solve(ar, n);
    cout << "ans = " << ans << "\n";
  }
}
