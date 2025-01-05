def solve(arr, n):
    if arr.count(0) == n:
        return 0
    
    for i in range(1, n):
        if arr[i - 1] > arr[i]:
            return 2
    return 1

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    
    ans = solve(arr, n)
    print(ans)
