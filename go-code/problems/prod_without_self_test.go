package main

import (
	"reflect"
	"testing"
)

func TestProductWithoutSelf(t *testing.T) {

	type test struct {
		inputs []int
		want   []int
	}

	tests := []test{
	//	{inputs: []int{1, 2, 3}, want: []int{6,3,2}},
		{inputs: []int{1, 2, 3, 4}, want: []int{24, 12, 8, 6}},
		{inputs: []int{0, 1, 1, 1}, want: []int{1, 0, 0, 0}},
		{inputs: []int{1,2,3,4}, want: []int{24, 12, 8, 6}},
	}

	for _, tc := range tests {
		got := product(tc.inputs)
		if !reflect.DeepEqual(tc.want, got) {
			t.Fatalf("inputs: %v, expected: %v, got: %v",tc.inputs, tc.want, got)
		}
	}
}
