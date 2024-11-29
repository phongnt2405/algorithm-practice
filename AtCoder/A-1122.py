def solve(s, n):
  if n % 2 == 0:
    return "No"
  
  if s[(n + 1) // 2 - 1] != '/':
    return "No"

  for i in range((n + 1) // 2 - 1):
    if s[i] != '1':
      return "No"
  
  for i in range((n + 1) // 2, n):
    if s[i] != '2':
      return "No"
  
  return "Yes"

n = int(input())
s = input()

ans = solve(s, n)
print(ans)