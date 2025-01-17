package main
import (
	"fmt"
	"sort"
)

func main() {
	n := 5
	arr := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&arr[i])
	}
	sort.Ints(arr)

	max := 0
	for i := n - 1; i >= 1; i-- {
		max += arr[i]
	}

	min := 0
	for i := 0; i < n - 1; i++ {
		min += arr[i]
	}

	fmt.Printf("%d %d", min, max)
}