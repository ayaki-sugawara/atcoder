def main():
    n = int(input())
    a = list(map(int, input().split()))
    b = [x for x in range(n)]
    ab = {k: v for (k, v) in zip(b, a)}
    ab = sorted(ab.items(), key=lambda x: x[1], reverse=True)
    print(ab[1][0] + 1)
main()

