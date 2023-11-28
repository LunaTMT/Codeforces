from math import floor
n = int(input())
 
q = min(n/i for i in (1, 2, 3, 4, 5))
 
print(floor(q)+1 if q % 1 != 0 else int(q))