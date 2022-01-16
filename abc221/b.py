s = list(input())
t = list(input())

for i in range(len(s)-1):
    if s[i] != t[i]:
        temp = s[i+1]
        s[i+1] = s[i]
        s[i] = temp
        break

if s == t:
    print("Yes")
else:
    print("No")


