def solve(s, n):
    i = 1
    while i < n:
        if i > 0 and s[i] == 'A' and s[i - 1] == 'W':
            s[i] = 'C'
            s[i - 1] = 'A'
            i -= 1
        else: i += 1
    return ''.join(s)

s = input()

ans = solve(list(s), len(s))
print(ans)
