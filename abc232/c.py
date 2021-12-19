def main():
    n, m = map(int, input().split())
    takahashi = [0] * n
    aoki = [0] * n
    for _ in range(m):
        #a[i], b[i] = map(int, input().split())
        a, b = map(int, input().split())
        takahashi[a-1] += 1
        takahashi[b-1] += 1
    for _ in range(m):
        c, d = map(int, input().split())
        aoki[c-1] += 1
        aoki[d-1] += 1
    takahashi.sort()
    aoki.sort()
    if takahashi == aoki:
        print("Yes")
    else:
        print("No")

main()
