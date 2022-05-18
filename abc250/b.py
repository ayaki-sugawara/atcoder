N, A, B = map(int, input().split())
for i in range(A*N):
    ans = []
    for j in range(B*N):
        # index 0 begin
        # 縦から i // a 行目、横から j // b 列目のタイル
        # 縦から偶数行目なら偶数列が [.], 奇数行目なら偶数列が[#]
        if (i//A) % 2 == 0:
            if(j//B) % 2 == 0:
                ans.append('.')
            else:
                ans.append('#')
        else:
            if(j//B) % 2 == 0:
                ans.append('#')
            else:
                ans.append('.')
    print(*ans, sep='')