x,y,z= map(int,input().split())
a=(x+y)//z
if a==(x//z)+(y//z):
    b=0
else:
    b=min(z-(x%z),z-(y%z))
print(a,b)