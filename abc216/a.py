x, y = map(int, input().split('.'))
if y < 3:
    print(str(x) + "-")
elif y < 7:
    print(str(x))
else:
    print(str(x) + "+")
