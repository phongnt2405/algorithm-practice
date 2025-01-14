package main 
import (
	"fmt"
	"os"
	"math"
)

func findMax(arr []int) int {
	max := 0
	for _, val := range arr {
		max = math.MaxInt(max, val)
	}
	return max
}

func solve(arr []int, n int) int {
	result := 0
	const key = findMax(arr)

	for _, val := range arr {
		result += key - val
	}
	return result
}

func main() {
	reader := os.Stdin
	writer := os.Stdout

	var t int 
	fmt.Fscan(reader, &t)

	for _ = range t {
		var n int
		fmt.Fscan(reader, &n)

		arr := make([]int, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(reader, &arr[i])
		}
		
		fmt.Fprintln(writer, solve(arr, n))
	}
}
