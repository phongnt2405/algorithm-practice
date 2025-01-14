package main
import (
	"fmt"
	"os"
)

func main() {
	reader := os.Stdin
	writer := os.Stdout

	var t int
	fmt.Fscan(reader, &t)

	for _ = range t {
		var n, a, b, c int 
		fmt.Fscan(reader, &n, &a, &b, &c)

		sum := a + b + c
		count := n / sum * 3

		if n % sum <= a {
			count += 1
		} else if n % sum <= a + b {
			count += 2
		} else if n % sum <= a + b + c {
			count += 3
		}

		fmt.Fprintln(writer, count)
	}
}