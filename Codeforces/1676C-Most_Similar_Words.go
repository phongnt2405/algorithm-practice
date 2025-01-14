package main
import (
	"fmt"
	"os"
	"math"
)

func solve(arr []string, n, m int) int {
	if n == 2 {
		total := 0
		for i := 0; i < m; i++ {
			diff := int(arr[0][i]) - int(arr[1][i])
			if diff < 0 {
				diff = -diff
			}
			total += diff 
		}
		return total 
	}

	minVal := math.MaxInt32 

	for i := 0; i < n; i++ {
		for j := i + 1; j < n; j++ {
			total := 0 
			for k := 0; k < m; k++ {
				diff := int(arr[i][k]) - int(arr[j][k])
				if diff < 0 {
					diff = -diff 
				}
				total += diff 
			}
			if total < minVal {
				minVal = total 
			}
		}
	}

	return minVal
}

func main() {
	reader := os.Stdin
	writer := os.Stdout

	var t int 
	fmt.Fscan(reader, &t)

	for _ = range t {
		var n, m int 
		fmt.Fscan(reader, &n, &m)

		arr := make([]string, n)
		for i := 0; i < n; i++ {
			fmt.Fscan(reader, &arr[i])
		}

		fmt.Fprintln(writer, solve(arr, n, m))
	}
}