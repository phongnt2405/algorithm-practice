#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;

std::string make() {
  std::string s;
  cin >> s;
  std::string ans = "";

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'U') ans += 'D';
    else ans += 'U';
  }
  return ans;
}

std::vector<int> solve(std::vector<int>& ar, int n) {
  for (int i = 0; i < n; i++) {
    int ns;
    cin >> ns; 
    std::string s = make();

    for (char c : s) {
      if (c == 'U') {
        if (ar[i] == 9) ar[i] = 0;
        else ar[i]++;
      } else if (c == 'D') {
        if (ar[i] == 0) ar[i] = 9;
        else ar[i]--;
      }
    }
  }
  return ar;
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

    std::vector<int> ans = solve(ar, n);
    for (auto val : ans) cout << val << " ";
    cout << "\n";
  } 
}
