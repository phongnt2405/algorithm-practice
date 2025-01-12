#include <iostream>
using namespace std;

int cal(int &n) {
  int total = 0;
  int loop = 3;  
  while (loop--) {
    total += n % 10;
    n /= 10;
  }
  return total;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int t1 = cal(n);
    int t2 = cal(n);

    cout << (t1 == t2 ? "Yes" : "No") << "\n";
  }
}
