def solve(arr, n, k):
  if n == 1: 
    if arr[0] % k != 0:
      print("No")
      return 
    else:
      print("Yes")
      print(1)
      return

  count = 0
  
  for i in range(n):
    for j in range(i + 1, n):
      if abs(arr[i] - arr[j]) % k != 0:
        count += 1
  
  if count == 0:
    print("No")
  else:
    print("Yes")
    print(count)

for _ in range(int(input())):
  n, k = map(int, input().split())
  arr = list(map(int, input().split()))
  
  solve(arr, n, k)