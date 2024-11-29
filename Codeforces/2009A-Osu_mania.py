def solve(arr, n):
  ans = []
  for i in range(n):
    for j in range(4):
      if arr[i][j] == '#':
        ans.append(j + 1)
        break
  return sorted(ans, reverse=True)

for _ in range(int(input())):
  n = int(input())
  arr = []
  
  for _ in range(n):
    s = input()
    arr.append(list(s))
  
  ans = solve(arr, n)
  print(*ans)
  