n = int(input())
print(sum(1 if "++" in input() else -1 for i in range(n)))
