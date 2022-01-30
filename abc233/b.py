l, r = map(int, input().split())
s = input()
ans = s[0:l-1]
third = s[r:]
for i in range(r, l-1, -1):
    ans += s[i-1]
ans += third
print(ans)
