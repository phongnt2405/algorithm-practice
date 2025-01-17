package main

import (
	"fmt"
)

func getMaxValue(arr []int) int {
	max := 0
	for _, val := range arr {
		if val > max {
			max = val
		}
	}
	return max
}

func solve(arr []int) int {
	max := getMaxValue(arr)
	count := 0

	for _, val := range arr {
		if val == max {
			count++
		}
	}
	return count
}

func main() {
	var n int
	fmt.Scan(&n)

	arr := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}

	fmt.Println(solve(arr))
}