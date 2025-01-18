#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    long long x;
    cin >> x;

    long long ans = 1;
    while (x > 3) {
      x /= 4;
      ans *= 2;
    }
    cout << ans << "\n";
  }
}
