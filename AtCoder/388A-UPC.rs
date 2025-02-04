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

fn main() {
  let mut scanner = Scanner::new();

  let s: String = scanner.next();
  let chars: Vec<char> = s.chars().collect();
  println!("{}{}", chars[0], "UPC");
}
