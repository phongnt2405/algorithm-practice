h, w, x, y = map(int, input().split())
M = [list(input()) for _ in range(h)]
t = input()

ans = 0
x -= 1
y -= 1
for c in t:
    if c == 'U' and M[x - 1][y] != '#': x -= 1
    if c == 'D' and M[x + 1][y] != '#': x += 1
    if c == 'L' and M[x][y - 1] != '#': y -= 1
    if c == 'R' and M[x][y + 1] != '#': y += 1
    
    if M[x][y] == '@':
        ans += 1
        M[x][y] = '.'

print(x + 1, y + 1, ans)
