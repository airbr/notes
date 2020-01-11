package main

import (
	"bufio"
	"fmt"
	"log"
	"math/rand"
	"os"
	"time"
)

func main() {
	file, err := os.Open("../edited/Law notes.txt")

	if err != nil {
		log.Fatalf("failed opening file: %s", err)
	}

	scanner := bufio.NewScanner(file)
	scanner.Split(bufio.ScanLines)
	var txtlines []string

	for scanner.Scan() {
		txtlines = append(txtlines, scanner.Text())
	}
	file.Close()

	rand.Seed(time.Now().UnixNano())

	var randomline = txtlines[rand.Intn(2500)]

	fmt.Println(randomline)
}
