func findJudge(N int, trust [][]int) int {
	var graph [][][]int = make([][][]int, N+1)
	length := len(trust)
	for i := 0; i < N+1; i++ {
		graph[i] = make([][]int, 2)
	}
	for i := 0; i < length; i++ {
		graph[trust[i][1]][0] = append(graph[trust[i][1]][0], trust[i][0])
		graph[trust[i][0]][1] = append(graph[trust[i][0]][1], trust[i][1])
	}
	for i := 1; i <= N; i++ {
		//fmt.Println(i," ",graph[i][0]," ",graph[i][1])
		if len(graph[i][0]) == N-1 && len(graph[i][1]) == 0 {
			return i
		}
	}
	return -1
}