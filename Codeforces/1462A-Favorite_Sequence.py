def solve(arr, n):
    ans = [0] * n
    left, right = 0, n - 1
    i = 0

    while i < n:
        ans[i] = arr[left]
        i += 1
        if i < n:
            ans[i] = arr[right]
            i += 1
        left += 1
        right -= 1
    return ans

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    ans = solve(arr, n)
    print(*ans)
