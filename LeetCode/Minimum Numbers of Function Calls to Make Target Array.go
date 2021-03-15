func minOperations(nums []int) int {
	var one int = 0
	var maxTwo int = 0
	for i := 0; i < len(nums); i++ {
		var two = 0
		var numTemp int = nums[i]
		for numTemp >= 2 {
			mod := numTemp % 2
			one += mod
			numTemp = (numTemp - mod) / 2
			two++
		}
		if numTemp == 1 {
			one += 1
		}
		if two > maxTwo {
			maxTwo = two
		}
	}
	//fmt.Println(one,maxTwo)
	return one + maxTwo
}