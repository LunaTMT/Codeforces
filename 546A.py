k, n, w = map(int, input().split())
 
needs = k * (w * (w+1) // 2) - n
print(needs if needs > 0 else 0)