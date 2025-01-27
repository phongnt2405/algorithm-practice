#include <iostream>
#include <algorithm>
#include <string>
#include <set>

bool same(std::string s, int n) {
  char c = s[0];
  for (int i = 1; i < n; i++) {
    if (s[i] != c) return false;
  }
  return true;
}

int sum(std::string s, int start, int end) {
  std::set<char> set;
  for (int i = start; i < end; i++) {
    set.insert(s[i]);
  }

  return set.size();
}

int solve(std::string s, int n) {
  if (same(s, n)) return 2;
  int max_val = 2;

  for (int i = 0; i < n; i++) {
    int val1 = sum(s, 0, i);
    int val2 = sum(s, i, n);

    max_val = std::max(max_val, val1 + val2);
  }
  return max_val;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int ans = solve(s, n);
    std::cout << ans << "\n";
  }
}
