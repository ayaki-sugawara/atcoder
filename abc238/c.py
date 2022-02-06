n = int(input())
mod = 998244353

def sum1(f):
    f%=mod
    ans = (1+f)*f/2
    ans %= mod
    return ans

def digitf(d):
    ans = pow(10,d) - pow(10,d-1)
    return ans

temp = n
digit = 0
while(temp!=0):
    temp//=10
    digit +=1
ans = 0

for i in range(1, digit):
    f = digitf(i) 
    ans += sum1(f)
    ans %= mod
ff = n-pow(10, digit-1)+1 
ans += sum1(ff) 
ans %= mod 
print(int(ans))
