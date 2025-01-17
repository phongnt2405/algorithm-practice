#include <bits/stdc++.h>
using namespace std;

void reveal(vector<vector<char>>& arr, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == '#') {
        for (int k = 0; k < n; k++) {
          if (arr[k][j] == '.') arr[k][j] = 'X';
        }

        for (int k = 0; k < m; k++) {
          if (arr[i][k] == '.') arr[i][k] = 'X';
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n = 8, m = 8;
  vector<vector<char>> arr(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    string line;
    cin >> line;

    for (int j = 0; j < m; j++) }
    arr[i][j] = line[j];
  }

  reveal(arr, n, m);
  cout << "Mang hien tai la:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}
