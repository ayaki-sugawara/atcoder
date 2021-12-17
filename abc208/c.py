def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    min_snack = k//n #とりあえずもらえるお菓子
    left_snack = k - min_snack * n

    snack = [min_snack] * n
    order = [x for x in range(n)]
    pair = zip(a, order)
    pair = sorted(pair)

    for i in range(left_snack):
        snack[pair[i][1]] += 1
    for i in range(n):
        print(snack[i])
if __name__ == "__main__":
    main()
