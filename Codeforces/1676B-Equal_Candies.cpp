#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& A, int n) {
  int total = 0;

  auto it = min_element(A.begin(), A.end());
  int min = *it;  

  for (int val : A) {
    if (val != min) total += val - min;
  }
  return total;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int& x : A) cin >> x;
    
    int ans = solve(A, n);
    cout << ans << "\n";
  }
}
