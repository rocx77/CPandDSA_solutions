import math
ans = 0
n = 3
for i in range(n,1,-1):
    for j in range(i,1,-1):
        combi = math.comb(i,j)
        ans += combi
        print(f"{i} c {j} = {combi}")
print("ans: ",ans)      