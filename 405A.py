import re
 
s = input()
parts = re.split("WUB", s)
result = ' '.join([part for part in parts if part])  # filter out empty strings and join with spaces
print(result)