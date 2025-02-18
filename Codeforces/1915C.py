import math

def solve(arr, n):
    total = sum(arr)
    val = math.sqrt(total) * math.sqrt(total)
    return "Yes" if val == total else "No"

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    ans = solve(arr, n)
    print(ans)
