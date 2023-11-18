
res = 0
res = sum(1 if input().split().count("1") >= 2 else 0 for _ in range(int(input())))
print(res)