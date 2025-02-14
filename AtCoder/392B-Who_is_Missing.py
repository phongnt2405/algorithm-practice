def solve(Q: list[int], P: list[int], n: int) -> list[int]:
    ans: list[int] = [0] * n
    for i in range(n):
        ans[Q[i] - 1] = Q[P[i] - 1]
    return ans

n: int = int(input())
P: list[int] = list(map(int, input().split()))
Q: list[int] = list(map(int, input().split()))

ans: list[int] = solve(Q, P, n)
print(*ans)

