n, m = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
flag = True
for b in B:
    if b in A:
        A.remove(b)
    else:
        flag = False
        break
if(flag):
    print("Yes")
else:
    print("No")
