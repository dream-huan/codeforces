package main

import (
	"fmt"
)

type myint int
type Aint = int

func Factorial(n int) (result int) {
	if n == 1 {
		return 0
	} else if n == 2 {
		return 1
	} else {
		return Factorial(n-1) + Factorial(n-2)
	}
}

func main() {
	var a myint
	a = 1
	fmt.Print(a)
	fmt.Print(Factorial(15))
}
