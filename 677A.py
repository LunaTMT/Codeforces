n, h = map(int, input().split())
 
print(sum(1 if i <= h else 2 for i in map(int, input().split())))