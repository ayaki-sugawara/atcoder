def main():
    h, w, n = map(int, input().split())
    idx = [x+1 for x in range(n)]
    A, B = [], []
    for i in range(n):
        a, b = map(int, input().split())
        A.append(a)
        B.append(b)

    H = {k: v+1 for v, k in enumerate(list(sorted(set(A))))}
    W = {k: v+1 for v, k in enumerate(list(sorted(set(B))))}

    for i in range(n):
        print(H[A[i]], W[B[i]])

main()
