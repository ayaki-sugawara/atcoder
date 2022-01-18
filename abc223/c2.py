n = int(input())
t = 0
A = []
B = []
for i in range(n):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)
    t += a/b
ans = 0
t /= 2
i=0
while(t>0):
    ans += B[i] * min(A[i]/B[i], t)
    t -= min(A[i]/B[i], t)
    i+=1
print(ans)
