def solve(arr, n):
    count = 0
    for i in range(n):
        for j in range(n - 1, -1, -1):
            if i == j: break
            if arr[i] <= arr[j] // 2: count += 1
    return count

n = int(input())
arr = list(map(int, input().split()))

print(solve(arr, n))    