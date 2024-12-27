#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int t; 
  std::cin >> t;

  while (t--) {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int& x : arr) std::cin >> x;

    int ans = 0;
    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
      if (i + 2 < n)
        if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2]) 
          ans = arr[i];
    }

    std::cout << (ans == 0 ? -1 : ans) << "\n";
  }
}
