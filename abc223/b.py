s = input()
s_list = []

for i in range(len(s)):
    s_list.append(s)
    s = s[-1] + s[0:-1]
s_list.sort()
print(s_list[0])
print(s_list[-1])
