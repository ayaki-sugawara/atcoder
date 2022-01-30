def main():
    n, k = map(int, input().split())
    A = list(map(int, input().split()))
    s = [0]
    for idx, a in enumerate(A):
        s.append(a+s[idx])

    ans = 0
    mp = {}
    for r in range(n+1):
        if s[r]-k in mp:
            ans += mp[s[r]-k]
        if s[r] in mp:
            mp[s[r]] += 1
        else:
            mp[s[r]] = 1
    print(ans)
main()
