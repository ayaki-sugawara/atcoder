n, k, x = map(int, input().split())
A = list(map(int, input().split()))
A.sort(reverse=True)
idx = 0
while k > 0:
    k = k - A[idx] // x
    A[idx] = A[idx] % x
    idx += 1
    if idx == n:
        break
A.sort(reverse=True)
if (k>0):
    for i in range(k):
        if i < len(A):
            A[i] = 0
print(sum(A))
