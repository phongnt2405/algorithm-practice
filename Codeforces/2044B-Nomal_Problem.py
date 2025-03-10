def solve(s, n):
    ans = ""
    for i in range(n - 1, -1, -1):
        if s[i] == "q": ans += "p"
        elif s[i] == "p": ans += "q"
        else: ans += "w"
    return ans

for _ in range(int(input())):
    s = input()
    ans = solve(s, len(s))
    print(ans)
