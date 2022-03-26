S = list(input().split())
T = list(input().split())
d = 0
for i in range(len(S)):
    if S[i] != T[i]:
        d += 1
if d == 0 or d == 3:
    print("Yes")
else:
    print("No")
