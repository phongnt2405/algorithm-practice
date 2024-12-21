#include <iostream>
#include <algorithm>
#include <array>

int main() {
  std::array<int, 4> arr;
  for (int& x : arr) std::cin >> x;

  int count = 0;
  std::sort(arr.begin(), arr.end());
  
  for (int i = 1; i < 4; i++) {
    if (arr[i] == arr[i - 1]) count++;
  }
  std::cout << count;
}
