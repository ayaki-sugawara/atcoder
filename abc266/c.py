def judge(a, b, c):
    AB = [b[0] - a[0], b[1] - a[1]]
    AC = [c[0] - a[0], c[1] - a[1]]
    # 外積のz成分が負ならtrue
    return AB[0] * AC[1] - AB[1] * AC[0] < 0


def main():
    [A, B, C, D] = [list(map(int, input().split())) for _ in range(4)]

    if judge(B, A, C) and judge(C, B, D) and judge(D, C, A) and judge(A, D, B):
        print("Yes")
    else:
        print("No")


main()
