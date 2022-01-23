n, k, a = map(int, input().split())
while True:
    k-=1
    if k==0: break;
    if n == a:
        a = 1
    else:
        a += 1
print(a)
