n = int(input())
ok = [x for x in range(1, 2 * n + 2)]
while True:
    print(ok.pop(0))
    aoki = int(input())
    if aoki == 0:
        break
    ok.remove(aoki)
