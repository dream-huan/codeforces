package main

import (
	"fmt"
	"sync"
)

var x chan int
var b chan int
var wg sync.WaitGroup

/* type myint int
type Aint = int

func Factorial(n int) (result int) {
	if n == 1 {
		return 0
	} else if n == 2 {
		return 1
	} else {
		return Factorial(n-1) + Factorial(n-2)
	}
} */

func square(ch1 chan int) {
	defer wg.Done()
	for i := 1; i < 100; i++ {
		ch1 <- i
		// wg.Done()
	}
	close(ch1)
}

func p(ch1, ch2 chan int) {
	defer wg.Done()
	for i := range ch1 {
		ch2 <- i * i
		// wg.Done()
	}
	close(ch2)
}

func main() {
	x = make(chan int, 100)
	b = make(chan int, 100)
	wg.Add(2)
	go square(x)
	go p(x, b)
	wg.Wait()
	for i := range b {
		fmt.Println(i)
	}
}
