upper = False
lower = False
same = True
S = list(input())
for s in S:
    if(s.islower()):
        lower = True
    if(s.isupper()):
        upper = True
if len(S) != len(set(S)):
    same = False

if(upper and lower and same):
    print("Yes")
else:
    print("No")
