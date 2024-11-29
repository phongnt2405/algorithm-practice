def solve(arr: list, n: int) -> str:
  for i in range(1, n):
    if abs(arr[i - 1] - arr[i]) not in {5, 7}:
      return "No";
  return "Yes"

for _ in range(int(input())):
  n = int(input())
  arr = list(map(int, input().split()))
  
  ans: str = solve(arr, n)
  print(ans)
  