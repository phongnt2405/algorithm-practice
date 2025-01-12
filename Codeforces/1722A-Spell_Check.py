def solve(s, n):
    if n != 5: return "NO"
    return "YES" if sorted(s) == sorted("Timur") else "NO"

for _ in range(int(input())):
    n = int(input())
    s = set(input())
    
    print(solve(s, n))