import sys

def main():
    input = sys.stdin.readline
    a, b, c = [int(x) for x in input().split()]
    ans = 21 - a - b - c
    print(ans)

if __name__ == "__main__":
    main()
