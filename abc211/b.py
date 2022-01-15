def main():
    S = []
    for _ in range(4):
        s = input()
        S.append(s)
    S = set(S)
    if len(S) == 4:
        print("Yes")
    else:
        print("No")
main()
