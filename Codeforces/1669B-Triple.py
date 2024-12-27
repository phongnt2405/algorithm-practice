
t = int(input())
for _ in range(t):
    n = int(input())
    row = list(map(int, input().split()))

    arr = [0] * len(row)
    for i in range(n):
        arr[row[i]] += 1

    result = 0
    for val in arr:
        if val >= 3:
            result = val 
    print(result)
