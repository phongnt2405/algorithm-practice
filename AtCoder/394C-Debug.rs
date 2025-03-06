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

fn solve(s: &String) -> String {
    let mut cs: Vec<char> = s.chars().collect();
    let n: usize = cs.len();
    let mut i: usize = 1;

    while i < n {
        if i > 0 && cs[i] == 'A' && cs[i - 1] == 'W' {
            cs[i] = 'C';
            cs[i - 1] = 'A';
            i -= 1;
        } else {
            i += 1;
        }
    }
    cs.into_iter().collect()
}

fn main() {
    let mut scan = Scanner::new();

    let s = scan.next();
    let ans = solve(&s);

    println!("{}", ans);
}
