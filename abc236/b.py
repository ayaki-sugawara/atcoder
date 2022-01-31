n = int(input())
idx = [i for i in range(1, n+1)]
card = [4] * n
hand = dict(zip(idx, card))
A = list(map(int, input().split()))
for a in A: 
    hand[a] -= 1
    if hand[a] == 0:
        hand.pop(a)
print(*hand.keys())
