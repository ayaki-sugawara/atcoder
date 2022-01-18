n = int(input())
edge = [0] * n
for i in range(n-1):
    a, b = map(int, input().split())
    edge[a-1]+=1
    edge[b-1]+=1
if max(edge) == n-1:
    print("Yes")
else:
    print("No")
