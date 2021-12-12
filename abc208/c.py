def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    number = sorted(a) #国民番号の小さい順
    min_snack = k//n #とりあえずもらえるお菓子
    left_snack = k - min_snack
    snack = [min_snack] * n #お菓子の個数
    for i in range(left_snack):
        national_numebr = number[i]



if __name__ == "__main__":
    main()
