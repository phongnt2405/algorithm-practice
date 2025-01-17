#include <iostream>
#include <string>

using namespace std;

string solve(string s, int n) {
  string ans = "";
  string check = s.substr(n - 2, 2);
  int hours = (s[0] - '0') * 10 + (s[1] - '0');

  if (check == "PM") {
    if (hours != 12)
      hours += 12;
  } else if (hours == 12) hours = 0;

  ans += (hours / 10) + '0';
  ans += (hours % 10) + '0';
  return ans + s.substr(2, n - 4);
}

int main() {
  string s;
  cin >> s;

  cout << solve(s, s.length()) << endl;
}
