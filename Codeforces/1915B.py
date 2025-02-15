def solve(mat, n):
    for row in mat:
        if "?" in row:
            if "A" not in row: return "A"
            elif "B" not in row: return "B"
            else: return "C"
    return ""

for _ in range(int(input())):
    n = 3
    mat = [list(input()) for _ in range(n)]

    ans = solve(mat, n)
    print(*ans)
