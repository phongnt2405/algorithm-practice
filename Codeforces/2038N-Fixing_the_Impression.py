def solve(s):
  a = int(s[0])
  b = int(s[2])
  
  if a == b:
    return "="
  elif a < b:
    return "<"
  else:
    return ">"
  

for _ in range(int(input())):
  s = input()

  ans = s[0] + solve(s) + s[2]
  print(ans)