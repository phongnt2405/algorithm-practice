use std::io;
use std::str::FromStr;
use std::cmp::max;

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

fn solve(vec1: &Vec<i32>, vec2: &mut Vec<i32>, n: usize, d: usize) {
  let mut max_val: i32 = 0;

  for _ in 0..d {
    for j in 0..n {
      vec2[j] += 1;
      max_val = max(max_val, vec1[j] * vec2[j]);
    }
    println!("{}", max_val);
  }
}

fn main() {
  let mut scanner = Scanner::new();

  let (n, d): (usize, usize) = (scanner.next(), scanner.next());
  let mut vec1: Vec<i32> = Vec::with_capacity(n);
  let mut vec2: Vec<i32> = Vec::with_capacity(n);

  for _ in 0..n {
    let a: i32 = scanner.next();
    let b: i32 = scanner.next();
    vec1.push(a);
    vec2.push(b);
  }

  solve(&vec1, &mut vec2, n, d);
}
