def count_val(arr, t):
    return sum(1 for val in arr if val >= t)

def add_one(arr, n):
    for i in range(n):
        arr[i] += 1

n, t, p = map(int, input().split())
arr = list(map(int, input().split()))

count = 0
while(count_val(arr, t) < p):
    add_one(arr, n)
    count += 1

print(count)
