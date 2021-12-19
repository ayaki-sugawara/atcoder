def main():
    s = input() 
    t = input()

    for i in range(len(s)-1):
        sk = ord(s[i+1]) - ord(s[i])
        tk = ord(t[i+1]) - ord(t[i])
        sk = sk % 26
        tk = tk % 26
        if sk != tk:
            print("No")
            return 0
    print("Yes")
    return 0

main()
