capacity = 0
sum_ = 0
 
for i in range(int(input())):
    minus, plus = map(int, input().split())
    sum_ -= minus
    sum_ += plus
    capacity = max(capacity, sum_)
 
print(capacity)