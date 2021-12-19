
def main():
    inf = 1 << 60
    n, m = map(int, input().split())
    a = [0] * m
    b = [0] * m
    c = [0] * m
    for i in range(m):
        a[i], b[i], c[i] = map(int, input().split())
    d = [[inf] * n for _ in range(n)]
    for i in range(n):
        d[i][i] = 0
    for i in range(m):
        d[a[i]-1][b[i]-1] = c[i]
    answer = 0
    for k in range(n):
        ans = [[inf] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                ans[i][j] = min(d[i][j], d[i][k] + d[k][j])
                if ans[i][j] < 1 << 59:
                    answer += ans[i][j]
        d = ans
    print(answer)

if __name__ == "__main__":
    main()
