def solve(S, T, n, m):
    for a in range(n - m + 1):
        for b in range(n - m + 1):
            check = True
            for i in range(m):
                for j in range(m):
                    if S[a + i][b + j] != T[i][j]:
                        check = False
                        break
            if check:
                print(a + 1, b + 1)
                return

n, m = map(int, input().split())

S = [input() for _ in range(n)]
T = [input() for _ in range(m)]

solve(S, T, n, m)
