n, i = map(int, input().split())
 
 
B_len = (n//2)
A_len = B_len + 1 if n % 2 == 1 else B_len
 
if i <= A_len:
    print(1+(2*(i) - 1))
else:
    print(2*i)