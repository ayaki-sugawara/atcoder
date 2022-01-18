n, m = map(int, input().split())
flag = [True for _ in range(m)] #make False if not prime
A = list(map(int, input().split()))

def cal_prime(a):
    prime = []
    for i in range(2, int(a**0.5)+1):
        while(a%i==0):
            a //= i
            prime.append(i)
    if a != 1:
        prime.append(a)
    return prime

def make_false(a):
    prime = cal_prime(a)
    for i in prime:
        if i > m:
            break
        if flag[i-1]:
            j = 1
            while(i * j <=m):
                flag[i*j-1] = False
                j+=1


for a in A:
    #make false when it is not prime number in (1,a)
    make_false(a)
print(flag.count(True))
for i in range(m):
    if flag[i]:
        print(i+1)
