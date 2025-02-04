use std::io;
use std::str::FromStr;

struct Scanner {
  buffer: Vec<String>,
}

impl Scanner {
  fn new() -> Scanner {
    Scanner { buffer: Vec::new() }
  }

  fn next<T: FromStr>(&mut self) -> T {
    loop {
      if let Some(token) = self.buffer.pop() {
        return token.parse().ok().expect("Failed parse");
      }
      let mut input = String::new();
      io::stdin().read_line(&mut input).expect("Failed read");
      self.buffer = input.split_whitespace().rev().map(String::from).collect();
    }
  }
}

fn solve(vec: &Vec<i64>, n: usize) -> String {
  for i in 0..(n - 2) {
    if vec[i] * vec[i + 2] != vec[i + 1] * vec[i + 1] {
      return String::from("No");
    }
  }
  String::from("Yes")
}

fn main() vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        std::vector<bool> ans;
        auto it = std::max_element(candies.begin(), candies.end());
        int max_val = *it;

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max_val) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }s
  let mut scanner = Scanner::new();

  let n: usize = scanner.next();
  let vec: Vec<i64> = (0..n).map(|_| scanner.next()).collect();

  let ans = solve(&vec, n);
  println!("{}", ans);
}
