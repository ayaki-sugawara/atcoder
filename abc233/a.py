x, y = map(int, input().split())
ans = 0
while(x+ans<y):
    ans += 10
print(ans//10)
