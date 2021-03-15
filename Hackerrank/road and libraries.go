func roadsAndLibraries(n int32, c_lib int32, c_road int32, cities [][]int32) int64 {
	if c_lib <= c_road {
		return int64(c_lib) * int64(n)
	}
	var graph [][]int = make([][]int, n+1)
	length := len(cities)
	var min int64 = 0
	for i := 0; i < length; i++ {
		graph[cities[i][0]] = append(graph[cities[i][0]], int(cities[i][1]))
		graph[cities[i][1]] = append(graph[cities[i][1]], int(cities[i][0]))
	}
	queue := list.New()
	var visited []bool = make([]bool, n+1)
	for i := 1; i <= int(n); i++ {
		if visited[i] {
			continue
		}
		count := 0
		queue.PushBack(i)
		for queue.Len() > 0 {
			e := queue.Front()
			visited[e.Value.(int)] = true
			for _, j := range graph[e.Value.(int)] {
				if !visited[j] {
					fmt.Print(j, " ")
					count++
					visited[j] = true
					queue.PushBack(j)
				}
			}
			queue.Remove(e)
		}
		//fmt.Print(count," ")
		min += (int64(count))*int64(c_road) + int64(c_lib)
		//fmt.Println(count)
	}
	allCityLib := int64(c_lib) * int64(n)
	if min > allCityLib {
		return allCityLib
	}
	return min
}