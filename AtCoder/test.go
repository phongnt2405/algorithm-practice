package main 

import (
  "fmt"
  "os"
  "bufio"
)

func main() {
  reader := bufio.NewReader(os.Stdin)
  fmt.Print("Nhap string: ")
  s, _ := reader.ReadString('\n')

  fmt.Print("String vua nhap la: ", s)
}
