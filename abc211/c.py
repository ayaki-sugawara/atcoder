def main():
    mod = 1000000007
    target = "chokudai"
    s = input()
    m = len(target)+1
    n = len(s) + 1
    d = [[0]*(n) for _ in range(m)]
    for j in range(n):
        d[0][j] = 1
    for i in range(m):
        for j in range(n):
            if j == 0 or i == 0:
                continue
            if s[j-1] == target[i-1]: #compare letter of j word in s and letter of i word in target
                d[i][j] = d[i-1][j-1] + d[i][j-1]
                d[i][j] %= mod
            else:
                d[i][j] = d[i][j-1]
                d[i][j] %= mod
    print(d[m-1][n-1])

main()
