#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  std::string s1, s2;
  std::cin >> s1 >> s2;

  if (s1 == "sick" && s2 == "fine") {
    std::cout << 2;
  } else if (s1 == "fine" && s2 == "sick") {
    std::cout << 3;
  } else if (s2 == "sick" && s2 == "sick") {
    std::cout << 1;
  } else { std::cout << 4;  }
}
