import math
n = int(input())
if math.log10(n)/math.log10(2)<n/2:
    print("Yes")
else:
    print("No")
