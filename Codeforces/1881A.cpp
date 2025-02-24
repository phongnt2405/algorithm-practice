#include <iostream>
#include <string>

bool check(std::string a, std::string b) {
  return b.find(a) != std::string::npos;
}

int solve(std::string a, std::string b) {
  for (int i = 0; i < 6; i++) {
    if (check(b, a)) return i;
    a += a;
  }
  return -1;
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int t;
  std::cin >> t;

  while (t--) {
    int n, m;
    std::cin >> n >> m;
    
    std::string a, b;
    std::cin >> a >> b;

    int ans = solve(a, b);
    std::cout << ans << "\n";
  }
}
