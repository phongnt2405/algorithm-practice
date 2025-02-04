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

fn solve(m: i32, mut a: i32, mut b: i32, mut c: i32) -> i32 {
  if a > m { a -= (a - m).abs(); }
  if b > m { b -= (b - m).abs(); }

  if a < m || b < m {
    if a != m {
      let remain: i32 = m - a;
      if c < remain {
        a += c;
        c = 0;
      } else {
        a += remain;
        c -= remain;
      }
    }

    if b != m && c != 0 {
      let remain: i32 = m - b;
      if c < remain { b += c; } else { b += remain; }
    }
  }
  a + b
}

fn main() {
  let mut scanner = Scanner::new();

  let t: usize = scanner.next();
  for _ in 0..t {
    let (m, a, b, c): (i32, i32, i32, i32) = 
    (scanner.next(), scanner.next(), scanner.next(), scanner.next());
    
    let ans = solve(m, a, b, c);
    println!("{}", ans);
  }  
}
