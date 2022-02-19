def make_list(x, y):
    ans = []
    ans.append((x+1, y+2))
    ans.append((x+1, y-2))
    ans.append((x+2, y+1))
    ans.append((x+2, y-1))
    ans.append((x-1, y+2))
    ans.append((x-1, y-2))
    ans.append((x-2, y+1))
    ans.append((x-2, y-1))
    return ans
x1, y1, x2, y2 = map(int, input().split())

A = set(make_list(x1,y1))
B = set(make_list(x2,y2))
ans = list(A & B)
if(len(ans) == 0):
    print("No")
else:
    print("Yes")
