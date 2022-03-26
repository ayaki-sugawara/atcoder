n, m = map(int, input().split())
A = list(map(int, input().split()))
C = list(map(int, input().split()))
B = []
for i in range(m+1):
    b = 0
    for j in range(i+1):
        b += C[i-j] / A[j]
    B.append(b)
print(*B)
