n = int(input())
P = []
P = list(map(int, input().split()))
idx = [x for x in range(1, n+1)]
Q = {k:v for k, v in zip(P, idx)}
Q = sorted(Q.items())
ans = []
for i in range(n):
    ans.append(Q[i][1])

print(*ans)
