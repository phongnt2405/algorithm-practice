#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int sum = a + b + c;
    int time = n / sum;
    int total = sum * time;
    int count = 3 * time;

    if (n == total) cout << count;
    else if (total + a >= n) cout << count + 1;
    else if (total + a + b >= n) cout << count + 2;
    else cout << count + 3;

    cout << "\n";
  }
}
