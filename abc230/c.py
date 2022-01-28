n, a, b = map(int, input().split())
p,q,r,s = map(int, input().split())

#first step
max_first = max(1-a, 1-b)
min_first = min(n-a, n-b)
#print("{}<=k=<{}".format(max_first, min_first))

#second step
max_second = max(1-a, b-n)
min_second = min(n-a, b-1)
#print("{}<=k<={}".format(max_second, min_second))

'''
i, jが塗られている
A+k, B+k = i, jまたはA+k, B-k = i, jなるkが存在する
k = i-Aかつj-B　または　k=-i-AかつB-jなるkが存在する
i-A=j-Bかつmax_first<=i-A<=min_first　または　i-A=B-jかつmax_second<=i-A<=min_secondなるをi, jが満たす
'''
ans = [[]*(s-r+1) for _ in range(q-p+1)]
for i in range(p, q+1):
    for j in range(r, s+1):
        if i-a == j-b and max_first<= i-a and i-a<=min_first:
            ans[i-p].append("#")
        elif i-a==b-j and max_second<= i-a and i-a<=min_second:
            ans[i-p].append("#")
        else:
            ans[i-p].append(".")

for idx in ans:
    print(*idx, sep="")
