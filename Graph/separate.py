def odd_even(arr, size):
    j = -1
    for i in range(size):
        if arr[i] % 2 == 0:
            j += 1
            arr[i], arr[j] = arr[j],arr[i]
    

def seg(arr, size):
	left = 0
	right = size - 1
	while left < right :
		while(arr[left] % 2 == 0 and left < right ):
			left += 1
		while(arr[right] % 2 == 1 and left < right):
			right -= 1
		# ~ if(left < right):
		arr[left], arr[right] = arr[right], arr[left]
		left += 1
		right -= 1
		
# this maintains the order with O(n) time and O(n) space 
def seg2(arr, s):
	index = 0
	res = [0] * s
	for num in arr:
		if num % 2 == 0:
			res[index] = num
			index += 1
			
	for num in arr:
		if num % 2 == 1:
			res[index] = num
			index += 1
	return res
		
n = int(input())
arr = list(map(int, input().split()))

result = seg2(arr, n)
print(result)
