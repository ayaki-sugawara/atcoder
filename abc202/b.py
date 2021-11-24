import sys

def main():
    input = sys.stdin.readline
    S = input().replace('\n','')
    ans = ''
    for i in range(len(S)):
        ans += reverse(S[-i-1])
    print(ans)

def reverse(text):
    if text == '9':
        return '6'
    elif text == '6':
        return '9'
    else:
        return text

if __name__ == '__main__':
    main()
