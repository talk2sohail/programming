package main

import "fmt"

type Node struct {
	value int
	right *Node
	left  *Node
}

func newNode(data int) *Node {
	return &Node{
		value: data,
		right: nil,
	}
}

type List struct {
	head *Node
	tail *Node
}

func newList() List {
	return List{head: nil, tail: nil}
}

func (l *List) PushBack(key int) {

	node := newNode(key)
	// if list is empty

	if l.head == nil {
		l.head = node
		l.tail = l.head
		return
	} else {
		t := l.tail
		for t.right != nil {
			t = t.right
		}
		t.right = node

		l.tail = t
	}

}

func (l *List) Reverse() {
	var prev, current, next *Node

	prev = nil
	current = l.head
	next = nil

	for current != nil {
		next = current.right
		current.right = prev

		prev = current
		current = next

	}
	l.head = prev
}

func (l *List) isEmpty() bool { return l.head == nil }

func (l *List) Print() {
	temp := l.head
	for temp != nil {
		fmt.Print(temp.value, "-> ")
		temp = temp.right
	}
	fmt.Println()
}
func main() {
	list := List{}
	list.PushBack(1)
	list.PushBack(2)
	list.PushBack(3)
	list.PushBack(4)
	list.Print()
	fmt.Println("============================")
	list.Reverse()
	list.Print()
	fmt.Println("is List Empty? ", list.isEmpty())
}
