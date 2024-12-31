package main 

import (
	"fmt"
)

func solve(arr [][]rune, n int) []int {
	ans := make([]int, 0)
	m := 4

	for i := n - 1; i >= 0; i-- {
		for j := 0; j < m; j++ {
			if arr[i][j] == '#' {
				ans = append(ans, j + 1)
			}
		}
	}
	return ans 
}

func main() {
	var t int
	fmt.Scan(&t)

	for _ = range t {
		var n int 
		fmt.Scan(&n)

		arr := make([][]rune, n)
		var s string

		for i := 0; i < n; i++ {
			fmt.Scan(&s)

			row := []rune(s)
			arr[i] = row 
		}

		ans := solve(arr, n)
		for _, val := range ans {
			fmt.Print(val, " ")
		}
		fmt.Println()
	}
}