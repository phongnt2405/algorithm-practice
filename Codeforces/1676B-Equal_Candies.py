def solve(arr, n):
    min_val = min(arr)
    total = 0

    for val in arr:
        if val != min_val:
            total += val - min_val
    return total

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    print(solve(arr, n))
