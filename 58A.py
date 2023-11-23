import re
word = input()
match = re.search(r'h.*e.*l.*l.*o', word)
    
print("YES" if match else "NO")