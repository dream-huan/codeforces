package main

import (
	"fmt"
	"reflect"
)

/* func f(a ...interface{}) {
	fmt.Print(a)
} */

type person struct {
	Name string
	Age  int
}

func reflectType(a interface{}) {
	// fmt.Printf("%T\n", a)
	v := reflect.TypeOf(a)
	fmt.Printf("type:%v,kind:%v\n", v.Name(), v.Kind())
}

func main() {
	// f(1, 2, 3, "ok")
	// var a interface{}
	// a = 123
	// reflectType(&a)
	// reflectType("ok")
	var b person
	b.Age = 1
	b.Name = "ss"
	//reflectType(b)
	t := reflect.TypeOf(b)
	for i := 0; i < t.NumField(); i++ {
		field := t.Field(i)
		fmt.Printf("name:%s index:%d type:%v\n", field.Name, field.Index, field.Type)
	}
	/* if scoreField, ok := t.FieldByName("Score"); ok {
		fmt.Printf("name:%s index:%d type:%v\n", scoreField.Name, scoreField.Index, scoreField.Type)
	} */
}
