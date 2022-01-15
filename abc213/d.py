import sys
sys.setrecursionlimit(10**6)
ans = []
def dfs(now, pre):
    ans.append(now)
    for to in path[now]:
        if to != pre:
            dfs(to, now)
            ans.append(now)

n = int(input())
path = [[] for _ in range(n+1)]
for _ in range(n-1):
    a, b = map(int, input().split())
    path[a].append(b)
    path[b].append(a)
for i in range(n+1): path[i].sort()
dfs(1, -1)
print(*ans)
