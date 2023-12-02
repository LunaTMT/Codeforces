s = input()
 
higher = sum(1 for i in s if i.isupper())
lower = len(s) - higher
 
print(s.upper() if higher > lower else s.lower())
 