package main
// product gives the product of all number execpt the the number 
// at the given index.
func product(nums []int) []int {

	s := len(nums)
	left := make([]int, s)
	left[0] = 1
	// create the left array with the product
	for i := 1; i < s; i++ {
		left[i] = left[i-1] * nums[i-1]
	}

	// update the array with right side product
	Rsum := 1
	for i := s - 1; i >= 0; i-- {
		left[i] = left[i] * Rsum
		Rsum = nums[i] * Rsum
	}
	return left

}
