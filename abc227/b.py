n = int(input())
S = list(map(int, input().split()))
s = set(S)
for a in range(1, 150):
    for b in range(1, 150):
        x = 4*a*b+3*(a+b)
        s.discard(x)
        if x > 1000:
           break
ans = 0
for x in s:
    ans += S.count(x)
print(ans)
