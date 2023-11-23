#5 5 3 2
#2

#5 5 3 2
A = list(map(int, "5 5 3 2".split()))
n = A[0]
A.sort()

B = [n//e for e in A]

arr = zip(A,B)

print()

#7 5 5 2
#2
