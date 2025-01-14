package main
import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	count := 1
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			if j + count >= n {
				fmt.Print("#")
			} else {
				fmt.Print(" ")
			}
		}
		count++
		fmt.Println()
	}
}