n = int(input())
A = [0]
B = [0]
left_start = [0]
right_start = [0]
for i in range(n):
    a,b = map(int, input().split())
    A.append(a) 
    B.append(b)

for i in range(1, n+1):
    left_d = left_start[i-1] + A[i] / B[i]
    right_d = right_start[-i] + A[-i-1] / B[-i-1]
    left_start.append(left_d)
    right_start.insert(0, right_d)

for i in range(n+1):
    if left_start[i] >= right_start[i]:
        hit = i
        break
ans = sum(A[0:hit] + 
print(left_start)
print(right_start)

