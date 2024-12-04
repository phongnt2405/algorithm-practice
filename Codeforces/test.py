import sys
input = sys.stdin.readline

def main():
    for _ in range(int(input())):
        n = int(input())
        print(*(input().index("#") + 1 for _ in range(n))[::-1])
main()