#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

bool solve(std::string s) {
  std::stack<char> st;
  std::unordered_map<char, char> mp;
  mp[']'] = '[';
  mp[')'] = '(';
  mp['>'] = '<';

  for (char c : s) {
    if (c == '[' || c == '(' || c == '<') {
      st.push(c);
    } else {
      if (st.empty()) return false;

      char c1 = st.top();
      char c2 = mp[c];
      if (c1 != c2) return false;
      st.pop();
    }
  }
  return st.empty();
}

int main() {
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::string s;
  std::cin >> s;

  bool ans = solve(s);
  std::cout << (ans ? "Yes" : "No");
}
