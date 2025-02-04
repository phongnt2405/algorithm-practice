package main

import (
	"fmt"
)

func main() {
	var s string
	fmt.Scan(&s)

	n := len(s)
	count := 0

	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			for k := j + 1; k < n; k++ {
				if s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q' {
					count++
				}
			}
		}
	}

	fmt.Println(count)
}
