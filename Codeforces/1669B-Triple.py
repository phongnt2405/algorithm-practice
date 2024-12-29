t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    arr.sort()
    ans = -1
    for i in range(n):
        if i + 2 < n:
            if arr[i] == arr[i + 1] and arr[i] == arr[i + 2]:
                ans = arr[i]

    print(ans)
