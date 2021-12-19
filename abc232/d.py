h, w = map(int, input().split())
c = [[0]*w for _ in range(h)]
s = [[-1]*w for _ in range(h)]

def S(i, j):
    if i >= h or j >= w:
        return 0
    if s[i][j] > -1:
        return s[i][j]
    if c[i][j] == '#':
        s[i][j] = 0
        return 0
    else:
        ans = max(S(i+1, j)+1, S(i, j+1)+1)
        s[i][j] = ans
        return ans
def main():
    for i in range(h):
        c[i] = input()
    print(S(0,0))

main()
