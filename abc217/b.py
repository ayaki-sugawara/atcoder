contests = ["ABC", "ARC", "AGC", "AHC"]
S = []
for _ in range(3):
    s = input()
    S.append(s)
ans = list(set(contests) ^ set(S))
print(ans[0])
