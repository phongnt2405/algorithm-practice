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

fn solve(vec: &Vec<i32>, n: usize) -> String {
  for i in 1..n {
    let val: i32 = (vec[i] - vec[i - 1]).abs();
    if val != 5 && val != 7 {
      return "No".to_string();
    }
  }
  "Yes".to_string()
}

fn main() {
  let mut scanner = Scanner::new();
  let t: i32 = scanner.next();

  for _ in 0..t {
    let n: usize = scanner.next();
    let vec: Vec<i32> = (0..n).map(|_| scanner.next()).collect();

    let ans = solve(&vec, n);
    println!("{}", ans);
  }
}
