import re

s = "WUBWUBABCWUB"
parts = re.split("WUB", s)
result = [part for part in parts if part]  # filter out empty strings
print(result)
