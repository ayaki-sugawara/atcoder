n, m = map(int, input().split())
s = list(input().split())
t = list(input().split())
l = 0
e = 0
while(l<len(s) and e < len(s)):
    if s[l] == t[e]:
        print("Yes")
        l+=1
        e+=1
    else:
        print("No")
        l+=1
