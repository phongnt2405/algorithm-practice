package main 
import (
	"fmt"
	"os"
)

func createArr(reader *os.File, n int) []int {
	arr := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Fscan(reader, &arr[i])
	}
	return arr 
}

func solve(arr1, arr2 []int, n int) int {
	total1, total2, index := 0, 0, 0

	for index < n {
		if index + 1 < n {
			if arr1[index] > arr2[index + 1] {
			total1 += arr1[index]
			total2 += arr2[index + 1]
			}
		}
		index++
	}

	total1 += arr1[n - 1]
	return total1 - total2
}

func main() {
	reader := os.Stdin
	writer := os.Stdout 

	var t int 
	fmt.Fscan(reader, &t)

	for _ = range t {
		var n int 
		fmt.Fscan(reader, &n)

		arr1 := createArr(reader, n)
		arr2 := createArr(reader, n)

		fmt.Fprintln(writer, solve(arr1, arr2, n))
	}
}