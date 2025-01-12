for _ in range(int(input())):
    s1, s2 = input().split()
    ans1 = s2[0] + s1[1:]
    ans2 = s1[0] + s2[1:]
    
    print(ans1, ans2)