def main():
    s = input()
    middle = len(s) // 2 - 1
    if len(s) % 2:
        middle += 1
    print(s[middle])


main()
