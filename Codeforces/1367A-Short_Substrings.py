for _ in range(int(input())):
  s = input()
  n = len(s)
  
  ans = s[0]
  ans += s[1]
  i = 3
  
  while i < n:
    ans += s[i]
    i += 2
  
  print(ans)
    