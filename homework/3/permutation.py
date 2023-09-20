def perm(N):
	p=[0]*N
	visited=[False]*N # 用來判斷使否使用過該格
	permNext(0,N,p,visited)

def permNext(n,N,p,visited):
	if N == n:
		print(p)
		return
	for x in range(N): # 回朔法
		if visited[x]==False:
			p[x]=n
			visited[x]=1
			permNext(n+1,N,p,visited)
			visited[x]=0
		
perm(2) # 列出 2 個的排列
perm(3) # 列出 3 個的排列
perm(4) # 列出 4 個的排列