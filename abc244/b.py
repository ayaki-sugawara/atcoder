n = int(input())
t = input()
x = 0
y = 0
now = 0
def go(x, y, now):
    if now % 4 == 0:
        x += 1
    elif now % 4 == 1:
        y -= 1
    elif now % 4 == 2:
        x -= 1
    else:
        y += 1
    return x, y, now
for s in t:
    if s == "S":
        x, y, now = go(x, y, now)
    else:
        now += 1
print(x, y, sep = " ")
