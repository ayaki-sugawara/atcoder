def main():
    n, m = map(int, input().split())
    A = list(map(int, input().split()))
    print(n, m)

    # i x A list
    ixA = [A[i] * (i+1) for i in range(n)]
    print(ixA)
    # ruiseki
    S = [0]
    for i in range(n):
        S.append(
            ixA[i] + S[-1]
        )
    print(S)
    ans = -1e60
    for i in range(n-m+1):
        ans = max(ans, S[i+m]-S[i])

    print(ans)


main()
