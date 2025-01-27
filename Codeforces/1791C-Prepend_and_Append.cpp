#include <iostream>
#include <string>

int solve(std::string s, int n) {
  int left = 0, right = n - 1;
  int len = n;

  while (left < right) {
    if (s[left] == '0' && s[right] == '1') len -= 2;
    else if (s[left] == '1' && s[right] == '0') len -= 2;
    else break;

    left++;
    right--;
  }

  return len;
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
