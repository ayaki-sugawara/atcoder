def main():
    n, m = map(int, input().split())
    A = list(map(int, input().split()))

    # Dij := A1からAi までのうち　j こ選んだ時の関数の最大値

    D = [[0 for _ in range(m+1)] for _ in range(n+1)]
    for i in range(n+1):
        for j in range(m+1):
            if j > i:
                D[i][j] = -1e60
            if i == 0 or j == 0:
                continue
            D[i][j] = max(D[i-1][j-1] + j * A[i-1], D[i-1][j])

    print(D[n][m])


main()
