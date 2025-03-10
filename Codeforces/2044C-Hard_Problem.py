def solve(m, a, b, c):
    if a < m:
        remain = m - a
        if a + c > m:
            a += remain
            c -= remain
        else: 
            a += c
            c = 0
    else: a = m
    
    if b < m:
        remain = m - b
        if b + c > m: b += remain
        else: b += c
    else: b = m
    
    return a + b

for _ in range(int(input())):
    m, a, b, c = map(int, input().split())
    
    ans = solve(m, a, b, c)
    print(ans)
