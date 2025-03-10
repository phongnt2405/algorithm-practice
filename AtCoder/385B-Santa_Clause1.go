package main

import (
  "fmt"
)

func solve(arr [][]rune, s string, h, w, x, y int) (int, int, int) {
  n := len(s)
  count := 0
  x--
  y--

  for i := 0; i < n; i++ {
    switch s[i] {
    case 'U':
      if arr[x-1][y] != '#' {
        x--
      }

    case 'D':
      if arr[x+1][y] != '#' {
        x++
      }

    case 'L':
      if arr[x][y-1] != '#' {
        y--
      }

    case 'R':
      if arr[x][y+1] != '#' {
        y++
      }
    }

    if arr[x][y] == '@' {
      arr[x][y] = '.'
      count++
    }
  }

  return x + 1, y + 1, count
}

func main() {
  var h, w, x, y int
  fmt.Scan(&h, &w, &x, &y)

  arr := make([][]rune, h)

  var s string
  for i := 0; i < h; i++ {
    fmt.Scan(&s)

    row := []rune(s)
    arr[i] = row
  }
  fmt.Scan(&s)

  x, y, count := solve(arr, s, h, w, x, y)
  fmt.Printf("%d %d %d", x, y, count)
}
