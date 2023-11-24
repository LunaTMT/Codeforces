total = int(input())

for _ in range(total):
    n = int(input())
    arr = list(map(int, input().split()))

    if arr[0] % 2 == 0: 
        print("1\n1")
        continue

    found = False
    for i in range(1, len(arr)):
        if arr[i] % 2 == 0:
            print(f"1\n{i+1}")
            found = True
            break
        elif arr[i]%2 and arr[i-1]%2:
            print(f"2\n{i} {i+1}")
            found = True
            break
    
    if not found:
        print("-1")