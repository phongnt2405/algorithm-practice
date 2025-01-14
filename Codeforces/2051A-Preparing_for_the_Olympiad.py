def solve(arr1, arr2, n):
    t1, t2, i = 0, 0, 0
    
    while i + 1 < n:
        if arr1[i] > arr2[i + 1]:
            t1 += arr1[i]
            t2 += arr2[i + 1]
        i += 1
    
    t1 += arr1[n - 1]
    return t1 - t2 

for _ in range(int(input())):
    n = int(input())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    print(solve(arr1, arr2, n))