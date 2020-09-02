


def riverSizes(matrix):
	sizes = []
	cnt = 0
	visited = [ [False for value in row] for row in matrix ]
	for i in range(len(matrix)):
		for j in range(len(matrix[i])):
			if(visited[i][j] or matrix[i][j] == 0):
				continue
			# ~ traverseNode(i, j, matrix, visited, sizes)
			s = dfs(i, j, matrix, visited)
			sizes.append(s)
	return sizes

def dfs(i, j, matrix, visited):
	visited[i][j] = True	
	l = [0,0,-1,1]
	r = [1,-1,0,0]
	count = 1
	for k in range(0,4):
		xx = l[k] + i
		yy = r[k] + j
		if safe(xx,yy,k,len(matrix), len(matrix[i])) and  visited[xx][yy] == False and matrix[xx][yy] == 1 :
			count += dfs(xx, yy, matrix, visited)
	return count
		
	

def safe(xx, yy, k, n, m):
	# ~ print(xx, yy)
	return xx >= 0 and xx < n and yy >= 0 and yy < m 
	
	
	
def traverseNode(i, j, matrix, visited, sizes,cnt):
	nodeToExplore = [[i,j]]
	currentRiverSize = 0
	while len(nodeToExplore):
		currentNode = nodeToExplore.pop()
		i = currentNode[0];
		j = currentNode[1];
		if visited[i][j]:
			continue
		visited[i][j] = True 
		if matrix[i][j] == 0:
			continue
		currentRiverSize += 1
		unvisitedNodes = getunvisitedNodes(i, j, matrix, visited)
		for neighbor in unvisitedNodes:
			nodeToExplore.append(neighbor)
		
	if currentRiverSize > 0:
		sizes.append(currentRiverSize)
	
	
def getunvisitedNodes(i, j, matrix, visited):
	unvisitednode = []
	
	if i > 0 and not visited[i-1][j]:
		unvisitednode.append([i-1,j])
		
	if i < len(matrix) -1 and not visited[i+1][j]:
		unvisitednode.append([i+1,j])
		
	if j > 0 and not visited[i][j-1]:
		unvisitednode.append([i,j-1])
		
	if j < len(matrix[0]) -1 and not visited[i][j+1]:
		unvisitednode.append([i,j+1])
	
	return unvisitednode


mat = [
		[1,0,0,1,0],
		[1,0,1,0,0],
		[0,0,1,0,1],
		[1,0,1,0,1],
		[1,0,1,1,0],
	]
	
res = riverSizes(mat)
print("the sizes of the rivers: ", res)
# ~ print(safe(0,0,0,5,5))
# ~ print(safe(0,0,3,5,5))
 		
