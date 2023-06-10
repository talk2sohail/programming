package main

import (
	"container/list"
	"fmt"
)

type customQueue struct {
	items *list.List
}

func NewCustomQueue() *customQueue { return &customQueue{items: list.New()} }

func (c *customQueue) Enq(val int) { c.items.PushBack(val) }

func (c *customQueue) Front() (int, error) {
	if c.Size() > 0 {
		if val, ok := c.items.Front().Value.(int); ok {
			return val, nil
		}
	}
	return 0, fmt.Errorf("Error: Queue empty")
}

func (c *customQueue) Size() int { return c.items.Len() }

func (c *customQueue) Len() bool { return c.items.Len() == 0 }

func main() {
	q := NewCustomQueue()

	fmt.Println("Enq: 1")
	q.Enq(1)
	fmt.Println("Enq: 2")
	q.Enq(2)
	fmt.Println("Queue empty?: ", q.Len())
	fmt.Println("Queueu size: ", q.Size())
}
