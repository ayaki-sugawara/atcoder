n = int(input())
S = input()
a = [0]

pre = 0
for idx, s in enumerate(S):
    position = a.index(idx)
    if s == "L":
        a.insert(position, idx+1)
        pre = pre -1
    else:
        a.insert(position+1, idx+1)
        pre = pre+1
print(*a)
