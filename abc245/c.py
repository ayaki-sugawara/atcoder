n, k = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
useA = True
useB = True
i = 0
try:
    while True:
        if i > 0:
            useA = nextA
            useB = nextB
        nextA = False
        nextB = False
        if useA:
            if A[i] - k <= A[i+1] and A[i] + k >= A[i+1]:
                nextA = True
            if A[i] - k <= B[i+1] and A[i] + k >= B[i+1]:
                nextB = True
        if useB:
            if B[i] - k <= B[i+1] and B[i] + k >= B[i+1]:
                nextB = True
            if B[i] - k <= A[i+1] and B[i] + k >= A[i+1]:
                nextA = True
        i += 1
        if not nextA and not nextB:
            print("No")
            break
        if i == len(A)-1:
            print("Yes")
            break
except Exception as e:
    print("Yes")
