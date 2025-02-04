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

fn solve(s: String) -> String {
  let mut ans = String::new();

  for c in s.chars().rev() {
    match c {
      'q' => ans.push('p'),
      'p' => ans.push('q'),
      _ => ans.push('w'),
    }
  }
  ans
}

fn main() {
  let mut scanner = Scanner::new();

  let t: usize = scanner.next();
  for _ in 0..t {
    let s: String = scanner.next();

    let ans = solve(s);
    println!("{}", ans);
  }
}
