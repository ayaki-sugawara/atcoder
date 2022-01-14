from collections import deque # require for breadth first search
def main():
    n, m = map(int, input().split())
    
    #init adjacent info
    g = [[] for _ in range(n+1)]
    #save adjacent node
    for _ in range(m):
        a, b = map(int, input().split())
        #a -= 1
        #b -= 1
        g[a].append(b)
        g[b].append(a)
    
    que = deque() # init que
    visited = [False] * (n+1) # info whether a node is visited
    
    distance = [0] * (n+1)
    path = [0] * (n+1)

    #put 1 in que
    que.append(1)
    visited[1] = True
    distance[1] = 0
    path[1] = 1

    while que: # continue until que is 0
        now = que.popleft() #take first element
        for adjacent in g[now]:
            if not visited[adjacent]:
                visited[adjacent] = True
                distance[adjacent] = distance[now] + 1
                path[adjacent] = path[now]
                que.append(adjacent)
            elif visited[adjacent] and distance[adjacent] == distance[now] + 1:
                path[adjacent] += path[now]
                path[adjacent] %= 10**9+7
    print(path[n])

main()
