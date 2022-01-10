def main():
    n = input()
    s = input()
    ans = "Takahashi"
    for i in range(int(n)):
        if s[i] == '1':
            print(ans)
            return 0;
        else:
            ans = "Aoki" if ans == "Takahashi" else "Takahashi"


if __name__ == '__main__':
    main()
