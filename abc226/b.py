n = int(input())
L = []
for i in range(n):
    a = tuple(map(int, input().split()))
    a = a[1:]
    L.append(a)

L = set(L)
print(len(L))
