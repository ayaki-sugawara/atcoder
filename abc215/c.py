import itertools

s, t = input().split()
t = int(t)

all_words = [''.join(p) for p in itertools.permutations(s)]
all_words = set(all_words)
all_words = list(all_words)
all_words.sort()
print(all_words[t-1])
