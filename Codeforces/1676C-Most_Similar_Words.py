import sys

def solve(arr, n, m):
    min = sys.maxsize

    if n == 2:
        s1 = arr[0]
        s2 = arr[1]
        total = 0

        for i in range(m):
            total += abs(ord(s1[i]) - ord(s2[i]))
        return total

    for i in range(n):
        for j in range(i + 1, n):
            total = 0
            for k in range(m):
                total += abs(ord(arr[i][k]) - ord(arr[j][k]))
            if total < min: min = total
    return min

for _ in range(int(input())):
    n, m = map(int, input().split())
    arr = []
    for _ in range(n):
        arr.append(input())

    print(solve(arr, n, m))

