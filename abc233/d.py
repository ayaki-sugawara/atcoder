def main():
    n, k = map(int, input().split())
    s = []#sum a in 0...idx
    A = list(map(int, input().split()))
    for idx, a in enumerate(A):
        if idx == 0:
            s.append(a)
        else:
            s.append(a+s[idx-1])
    mp = {}
    ans = 0
    for r in range(0, n):
        if s[r] in mp:
            mp[s[r]] += 1
        else:
            mp[s[r]] = 1
        if s[r] - k in mp:
            ans += mp[s[r]-k] #s[r]-s[l-1]=k
        elif s[r] == k:
            ans += 1
    print(ans)
main()
