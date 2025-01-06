def solve(n, x):
    total = 0
    count = 0
    
    for i in range(1, n + 1):
        for j in range(1, n + 1):
            total += i * j
            if i * j == x:
                count += 1

    return total - (count * x)

x = int(input())
n = 9
ans = solve(n, x)
print(ans)

