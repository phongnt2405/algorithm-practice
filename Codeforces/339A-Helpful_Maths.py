s = input()
n = len(s)
arr = list(s)

for i in range(0, n, 2):
  min = i
  for j in range(i + 2, n, 2):
    if int(arr[j]) < int(arr[min]):
      min = j 
      
  if int(arr[i]) != int(arr[min]):
    arr[min], arr[i] = arr[i], arr[min]

s = ''.join(arr)
print(s)