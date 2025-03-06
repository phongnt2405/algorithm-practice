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

fn solve(vec: &mut Vec<String>, n: usize) -> String {
    for i in 0..n {
        let mut min = i;
         for j in (i + 1)..n {
             if vec[j].len() < vec[min].len() {
                 min = j;
             }
         }
         if min != i { vec.swap(i, min); }
    }

    let mut ans = String::new();
    for str in vec {
        ans += str;
    }
    return ans;
}

fn main() {
    let mut scan = Scanner::new();

    let n: usize = scan.next();
    let mut vec: Vec<String> = (0..n).map(|_| scan.next::<String>()).collect();

    let ans = solve(&mut vec, n);
    println!("{}", ans);
}
