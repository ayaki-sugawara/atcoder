H, W = map(int, input().split())
r, c = map(int, input().split())
ans = 0
for h in range(1, H+1):
    for w in range(1, W+1):
        if (abs(h-r)+abs(w-c) == 1):
            ans += 1
print(ans)