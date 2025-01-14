n = int(input())

if n % 2 != 0: print("Weird")
else:
    if n > 20: print("Not Weird")
    elif 2 <= n <= 5: print("Not Weird")
    elif 6 <= n <= 20: print("Weird")
