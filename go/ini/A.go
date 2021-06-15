package main

import (
	"fmt"
	"io/ioutil"
	"strings"
)

type MysqlConfig string

func loadIni(fileName string) (err error) {
	// var section [5]string
	b, err := ioutil.ReadFile(fileName)
	if err != nil {
		return err
	}
	lineSlice := strings.Split(string(b), "\n")
	// fmt.Printf("%#v\n", lineSlice)
	for i, line := range lineSlice {
		if strings.HasPrefix(line, "#") {
			continue
		} else if strings.HasPrefix(line, "[") && strings.HasSuffix(line, "]") {
			// section[0] = strings.TrimSpace(line[1 : len(line)-1])
			// fmt.Printf("%#v\n", section[0])
			
		} else {

		}
		fmt.Printf("%#v\n", lineSlice[i])
	}
	return nil
}

func main() {
	// var mc MysqlConfig
	err := loadIni("./conf.ini")
	if err != nil {
		panic(err)
	}

}
