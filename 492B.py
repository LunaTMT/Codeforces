n, l = map(int, input().split())
lanterns = list(map(int, input().split()))

lanterns.sort()

n = len(lanterns)
max_dist = max(lanterns[i] - lanterns[i-1] for i in range(1, n))

max_dist = max(max_dist, lanterns[0], l - lanterns[n-1])
min_radius = max_dist / 2

print("{:.10f}".format(min_radius))  
 
