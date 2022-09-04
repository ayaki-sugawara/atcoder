def main():
    n = int(input())
    X = [-1 for _ in range(int(1e5) + 1)]
    A = [0 for _ in range(int(1e5) + 1)]
    for i in range(n):
        t, x, a = map(int, input().split())
        X[t] = x
        A[t] = a

    d = [[int(-1e60) for _ in range(5)] for _ in range(int(1e5) + 1)]
    d[0][0] = 0

    for t in range(1, int(1e5 + 1)):
        for x in range(5):
            if X[t] == x:
                tmp = d[t - 1][x]
                if x - 1 >= 0:
                    tmp = max(d[t - 1][x - 1], tmp)
                if x + 1 < 5:
                    tmp = max(d[t - 1][x + 1], tmp)
                d[t][x] = tmp + A[t]
            else:
                tmp = d[t - 1][x]
                if x - 1 >= 0:
                    tmp = max(d[t - 1][x - 1], tmp)
                if x + 1 < 5:
                    tmp = max(d[t - 1][x + 1], tmp)
                d[t][x] = tmp

    print(max(d[int(1e5)]))


main()
