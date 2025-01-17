package main

import (
	"fmt"
	"strconv"
)

func convert(s string) string {
	check := s[len(s) - 2 :]
	hours, _ :=  strconv.Atoi(s[:2])

	if check == "PM" {
		if hours != 12 {
			hours += 12
		}
	} else if hours == 12 {
		hours = 0
	}

	return fmt.Sprintf("%02d%s", hours, s[2 : len(s) - 2])
}

func main() {
	var s string
	fmt.Scan(&s)

	fmt.Println(convert(s))
}
