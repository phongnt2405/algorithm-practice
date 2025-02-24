def solve(arr, n, k):
    count = 1
    curr = 0

    for val in arr:
        if curr + val > k:
            count += 1
            curr = val
        else:
            curr += val
    return count

n, k = map(int, input().split())
arr = list(map(int, input().split()))

ans = solve(arr, n, k)
print(ans)
