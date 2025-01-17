def reveal(mat, n, m):
  for i in range(n):
    for j in range(m):
      if mat[i][j] == '#':
        for k in range(m):
          if mat[k][j] == '.': mat[k][j] = 'x'

        for k in range(n):
          if mat[i][k] == '.': mat[i][k] = 'x'

n, m = 8, 8
mat = []

for _ in range(n):
  row = input()
  mat.append(list(row))

reveal(mat, n, m)
total = 0

for i in range(n):
  total += mat[i].count('.')

print(total)
