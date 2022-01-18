S = []
for _ in range(3):
    s = input()
    S.append(s)
T = input()
ans = ""
for t in T:
    ans += S[int(t)-1]
print(ans)
