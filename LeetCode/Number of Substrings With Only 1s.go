import "math"

func numSub(s string) int {
	var total int64 = 0
	var count int64 = 0
	strlen := len(s)
	for i := 0; i < strlen; i++ {
		if s[i] == '0' {
			total += count * (count + 1) / 2
			count = 0
		} else {
			count++
		}
	}
	fmt.Println(count)
	total += count * (count + 1) / 2
	var result int64 = int64(math.Pow10(9)) + 7
	//fmt.Print(result)
	total = total % result
	return int(total)
}