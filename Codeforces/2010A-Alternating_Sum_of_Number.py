for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    total = 0
    for i in range(n):
        if i % 2 == 0: total += arr[i]
        else: total += -arr[i]

    print(total)

