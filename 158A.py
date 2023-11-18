n, k = map(int, input().split())
scores = list(map(int, input().split()))
print(sum(1 for score in scores if score > 0 and score >= scores[k-1]))