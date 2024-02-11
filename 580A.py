_ = input()
arr = list(map(int, input().split()))
n = len(arr)
 
res = 1
subset_length = 1
for i in range(n-1):
    if arr[i+1] >= arr[i]:
        subset_length += 1
    else:
        subset_length = 1
    res = max(res, subset_length)
print(res)