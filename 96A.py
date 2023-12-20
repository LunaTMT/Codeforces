import re
s = input()
r = re.findall(r'0+|1+', s)
 
print("YES" if any(len(i)>= 7 for i in r) else "NO")