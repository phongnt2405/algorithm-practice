package main

import "fmt"

func main() {
  var n, r int
  fmt.Scan(&n, &r)

  for i := 0; i < n; i++ {
    var d, a int
    fmt.Scan(&d, &a)

    if d == 1 {
      if r >= 1600 && r <= 2799 {
        r += a
      }
    } else if d == 2 {
      if r >= 1200 && r <= 2399 {
        r += a
      }
    }
  }	
  fmt.Print(r)
}
