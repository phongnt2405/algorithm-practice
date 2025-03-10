#include <iostream>
#include <list>

using std::cout;
using std::cin;

void solve(std::list<int>& l, int n, int &a, int &b) {
  int count = 0;
  while (!l.empty()) {
    int val;
    if (l.front() > l.back()) {
      val = l.front();
      l.pop_front();
    } else {
      val = l.back();
      l.pop_back();
    }

    if (count % 2 == 0) {
      a += val;
    } else {
      b += val;
    }
    count++;
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  std::list<int> l;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    l.push_back(val);
  }

  int a = 0, b = 0;
  solve(l, n, a, b);
  cout << a << " " << b;
}
