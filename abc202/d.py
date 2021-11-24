import sys
import math
sys.setrecursionlimit(10**6)
C = [[0]*30]*30
def S(i,j,N):
    'return Nth word'
    if i == 0:
        return 'b'*j
    elif j == 0:
        return 'a'*i
    if N > math.comb(i-1+j, i-1):
        return 'b' + S(i, j-1, N - math.comb(i-1+j, i-1))
    else:
        return 'a' + S(i-1, j, N)
        
def main():
    A, B, N = [int(x) for x in input().split()]
    ans = S(A, B, N)
    print(ans)

if __name__ == '__main__':
    main()
