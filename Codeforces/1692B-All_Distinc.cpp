#include <iostream>
#include <set>

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::set<int> se;
    for (int i = 0; i < n; i++) {
      int val; 
      std::cin >> val;
      
      se.insert(val);
    }

    if ((n - se.size()) % 2 == 0) {
      std::cout << se.size() << "\n";
    } else {
      std::cout << se.size() - 1 << "\n";
    }
  }
}
