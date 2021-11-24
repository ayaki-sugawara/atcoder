import sys

def main():
    input = sys.stdin.readline
    N = int(input())
    A = [int(x) for x in input().split()]
    B = [int(x) for x in input().split()]
    C = [int(x) for x in input().split()]

    C_R = dict()
    for c in C:
        C_R[c] = C_R.get(c,0) + 1

    B_R = dict()
    for c_r in C_R:
        key = B[c_r-1]
        B_R[key] = B_R.get(key,0) + C_R[c_r]

    ans = 0
    for a in A:
        ans += B_R.get(a, 0)
    print(ans)

if __name__ == '__main__':
    main()
