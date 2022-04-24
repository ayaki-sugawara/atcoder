a, b, c, d, e, f, x = map(int, input().split())
def run(p, q, r, s):
    counter = 0
    ans = 0
    while (s>0):
        counter += 1
        if(counter <= p):
            ans += q
        if(counter == p + r):
            counter = 0
        s -= 1
    return ans
takahashi = run(a,b,c,x)
aoki= run(d,e,f,x)
if(takahashi > aoki):
    print("Takahashi")
elif(takahashi < aoki):
    print("Aoki")
else:
    print("Draw")
