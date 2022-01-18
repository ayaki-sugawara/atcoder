n, m = map(int, input().split())
b = []
for _ in range(n):
    b.append(list(map(int, input().split())))

flag = False
for i in range(n):
    if i < n-1 and b[i+1][0] != b[i][0] + 7:
        print("No")
        flag = True
        break
    for j in range(m-1):
        if b[i][j+1] != b[i][j] + 1:
            print("No")
            flag = True
            break
        if b[i][j] % 7 == 0 and j != m-1:
            print("No")
            flag = True
            break
    if flag:
        break
if not flag:
    print("Yes")
