from collections import Counter
from sys import stdin, stdout

def solve(arr, n):
    cnt = Counter(arr)
    result = -1

    for val, freq in cnt.items():
        if freq >= 3:
            result = val;
    return result

t = int(input())
for _ in range(t):
    n = int(stdin.readline())
    arr = list(map(int, stdin.readline().split()))

    ans = solve(arr, n)
    print(ans)
