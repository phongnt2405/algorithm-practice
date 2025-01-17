#include <bits/stdc++.h>
using namespace std;

int solve(vector<string>& arr, int n, int m) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    int len = arr[i].length();
    if (m - len >= 0) {
      m -= len;
      count++;
    } else {
      break;
    }
  }

  return count;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for (auto& x : arr)
      cin >> x;

    cout << solve(arr, n, m) << "\n";
  }
}
