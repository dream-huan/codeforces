package main

import "fmt"

func main() {
	var a [10]int
	a[0] = 1
	for i, index := range a {
		fmt.Printf("%#v %#v\n", i, index)
	}
	var m map[string]string
	m = make(map[string]string)
	m["法国"] = "巴黎"
	m["中国"] = "北京"
	for c := range m {
		fmt.Printf("%#v %#v\n", c, m[c])
	}
	delete(m, "法国")
	for c := range m {
		fmt.Printf("%#v %#v\n", c, m[c])
	}
}
