n, i = map(int, input().split())
 
B_len = (n//2)
A_len = B_len + 1 if n % 2 == 1 else B_len
 
print(1+(2*(i - 1)) if i <= A_len else 2*abs(A_len - i))
    