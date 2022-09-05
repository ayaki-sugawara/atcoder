def main():
    n, m = map(int, input().split())
    A = list(map(int, input().split()))

    # Si A1からAiまでの和
    Si = [0]
    for a in A:
        Si.append(Si[-1]+a)

    ans = 0
    for i in range(m):
        ans += (i+1) * A[i]

    temp = ans
    for i in range(1, n-m+1):
        temp = temp + m * A[i+m-1] - (Si[i+m-1] - Si[i-1])
        ans = max(temp, ans)

    print(ans)


main()
