import itertools
s = list(input())
s = list(itertools.permutations(s))
s = set(s)
s = list(s)
print(len(s))
#print(len(list(itertools.permutations(s))))
