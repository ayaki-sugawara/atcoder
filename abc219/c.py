from functools import cmp_to_key
x = list(input())
new_dict = {char: idx for idx, char in enumerate(x)}
n = int(input())
S = []

def compare_char(a, b):
    if new_dict[a] < new_dict[b]:
        return -1
    elif a==b:
        return 0
    else:#b<a
        return 1

def compare_string(a, b):
    i=0
    if a == b:
        return 0
    while(i<min(len(a), len(b))):
        if compare_char(a[i], b[i]) == -1:
            return -1
        elif compare_char(a[i], b[i]) == 1:
            return 1
        i+=1
    if len(a) < len(b):
        return -1
    else:
        return 1
def main():    
    for _ in range(n):
        s = input()
        S.append(s)
    ans = sorted(S, key=cmp_to_key(compare_string))
    for x in ans:
        print(x)
main()
#print(compare_string('a', 'ab'))
