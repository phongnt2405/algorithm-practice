def solve(arr: list[int], n: int, k: int) -> int:
  arr = sorted(arr, reverse=True)
  total = 0
  
  for i in range(min(n, k)):
    total += arr[i]
  return total

for _ in range(int(input())):
  n, k = map(int, input().split())
  arr: list[int] = [0] * k
  
  for _ in range(k):
    b, c = map(int, input().split())
    arr[b - 1] += c
  
  ans: int = solve(arr, n, k)
  print(ans)