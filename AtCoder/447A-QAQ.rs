use std::io::{self, BufRead};

fn main() {
  let stdin = io::stdin();
  let mut iterator = stdin.lock().lines();

  let s = iterator.next().unwrap().unwrap();
  let n = s.len();

  let chars: Vec<char> = s.chars().collect();
  let mut count = 0;

  for i in 0..n {
    for j in (i + 1)..n {
      for k in (j + 1)..n {
        if chars[i] == 'Q' && chars[j] == 'A' && chars[k] == 'Q' {
          count += 1;
        }
      }
    }
  }

  println!("{}", count);
}
