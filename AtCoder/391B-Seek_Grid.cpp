#include <iostream>
#include <vector>

void solve(std::vector<std::string>& S, std::vector<std::string>& T, int n, int m) {
  for (int a = 0; a <= n - m; a++) {
    for (int b = 0; b <= n - m; b++) {
      bool check = true;
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
          if (S[a + i][b + j] != T[i][j]) {
            check = false;
            break;
          }
        }
      }
      if (check) { 
        std::cout << a + 1 << " " << b + 1 << "\n";
        return;   
      }
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n, m;
  std::cin >> n >> m;
  std::vector<std::string> S(n);
  std::vector<std::string> T(m);

  for (auto& x : S) std::cin >> x;
  for (auto& x : T) std::cin >> x;

  solve(S, T, n, m); 
}
