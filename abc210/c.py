def main():
    n, k = map(int, input().split())
    c = list(input().split())
    s = dict()
    for i in range(k):
        if c[i] in s:
            s[c[i]] += 1
        else:
            s[c[i]] = 1
    ans = len(s)
    for i in range(1, n-k+1):
        out_candy = c[i-1]
        in_candy = c[i+k-1]
        if in_candy in s:
            s[in_candy] += 1
        else:
            s[in_candy] = 1
        s[out_candy] -= 1
        if s[out_candy] == 0:
            s.pop(out_candy)
        ans = max(ans, len(s))
    print(ans)

        
main()

