_ = input()
arr = list(map(int, input().split()))
arr.sort(reverse=True)

right = sum(arr)
left = 0
count = 0

for i in arr:
    count += 1
    left += i
    right -= i
    
    if left > right:
        break
    if left == right:
        count += 1
        break

print(count)