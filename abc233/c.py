import itertools
n, x = map(int, input().split())
A = []
for i in range(n):
    la = list(map(int, input().split()))
    l = la[0]
    a = la[1:]
    A.append(a)
    
ans = 0

for l in itertools.product(*A):
    multiple = 1
    for a in l:
        multiple *= a
        if a > x:
            break
    if multiple == x:
        ans += 1
print(ans)
