n = int(input())
for _ in range(n):
    s = input()
    print(s[0] + str(len(s[1:-1])) + s[-1] if len(s) > 10 else s)
        

