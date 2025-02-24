def solve(arr, n):
    key = arr[0]
    for i in range(1, n):
        if arr[i] > key:
            return i + 1;
    return -1

n = int(input())
arr = list(map(int, input().split()))

ans = solve(arr, n)
print(ans)
