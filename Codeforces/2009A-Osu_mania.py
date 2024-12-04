for _ in range(int(input())):
  arr = []
  n = int(input())
  
  for _ in range(n):
    s = input()
    arr.append(s.index("#") + 1)
  print(*reversed(arr))