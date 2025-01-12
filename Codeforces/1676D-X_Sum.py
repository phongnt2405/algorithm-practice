def calc(A, n, m, x, y):
    direct = [(-1, -1), (1, -1), (-1, 1), (1, 1)]
    total = 0
    
    for dx, dy in direct:
        i, j = x, y
        while 0 <= i < n and 0 <= j < m:
            total += A[i][j]
            i += dx 
            j += dy
    return total - 3 * A[x][y]

def solve(A, n, m):
    max_val = 0
    for i in range(n):
        for j in range(m):
            total = calc(A, n, m, i, j)
            max_val = max(total, max_val)
    return max_val

for _ in range(int(input())):
    n, m = map(int, input().split())
    A = []
    
    for _ in range(n):
        row = list(map(int, input().split()))
        A.append(row)
    
    print(solve(A, n, m))
    