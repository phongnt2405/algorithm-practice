#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int& x : A)
      cin >> x;

    sort(A.begin(), A.end());
    cout << 2 * (A[n - 1] - A[0]) + 2 * (A[n - 2] - A[1]) << "\n";
  }
}
