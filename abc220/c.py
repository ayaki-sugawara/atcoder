n = int(input())
S = []
A = list(map(int, input().split()))
for a in A:
    if len(S) == 0:
        S.append(a)
    else:
        S.append(S[-1] + a)
    
x = int(input())

group_idx = x // S[-1]
remain = x % S[-1]
ans = n * group_idx
for idx, s in enumerate(S):
    if remain < s:
        ans += idx + 1
        break


print(ans)
