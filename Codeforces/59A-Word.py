s = input()
c1, c2 = 0, 0

for c in s:
    if c == c.upper(): c1 += 1
    else: c2 += 1

if c1 > c2: print(s.upper())
else: print(s.lower())