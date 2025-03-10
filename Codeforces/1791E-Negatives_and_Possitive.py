def all_neg(arr):
    for val in arr:
        if val < 0: return False
    return True

def solve(arr, n):
    if all_neg(arr): return sum(abs(x) for x in arr)
        

    
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    
    