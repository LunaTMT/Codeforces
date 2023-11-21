triple, double = map(int, input().split())
years = 0
 
while triple <= double:
    triple *= 3
    double *= 2
    years += 1
 
print(years)