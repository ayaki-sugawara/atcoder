import itertools
n = list(input())
ans = 0
for elements in itertools.permutations(n):
    for i in range(len(n)//2):
        x = int(''.join(elements[0:i+1]))
        y = int(''.join(elements[i+1:]))
        if ans < x * y:
            ans = x * y
print(ans)
