def solve(arr, n):
    for i in range(n - 2):
        if arr[i] and not arr[i + 1] and arr[i + 2]:
            return "NO"
    return "YES"
    
for _ in range(int(input())):
    n = int(input())
    n -= 2
    arr = list(map(int, input().split()))
    
    ans = solve(arr, n)
    print(ans)