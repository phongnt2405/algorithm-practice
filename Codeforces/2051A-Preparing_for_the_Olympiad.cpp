#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& A, vector<int>& B, int n) {
  int t1 = 0, t2 = 0, i = 0;

  while (i + 1 < n) {
    if (A[i] > B[i + 1]) {
      t1 += A[i];
      t2 += B[i + 1];
    }
    i++;
  }

  return t1 + A[n - 1] - t2;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> A(n), B(n);
    for (int& x : A) 
      cin >> x;
    for (int& x : B)
      cin >> x;

    cout << solve(A, B, n) << "\n";
  }
}
