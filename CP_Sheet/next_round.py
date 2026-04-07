n , k = list(map(int, input().split()))

scores = list(map(int, input().split())) 

curr = scores[k-1]
i = 0
while i<len(scores):
    if scores[i] < curr or scores[i]<=0:
        break
    else:
        i+=1

print(i)