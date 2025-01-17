#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int n = s.length();
    string ans = "";

    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'q') ans += 'p';
      else if (s[i] == 'p') ans += 'q';
      else ans += 'w';
    }

    cout << ans << "\n";
  }
}
