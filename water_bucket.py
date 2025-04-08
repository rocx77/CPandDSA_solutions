
# you have a grid with obstacles placed x units of water in poured from in one of the columns. when encoountering an obstacle
# water will split equally in left and right columns and buckets are placed at the bottom of each columnn.
# gooal is to figure out how much water will be filled in each bucket.

grid = [[0,0,0,0],[1,0,1,0],[0,1,0,0],[1,0,1,0],[0,0,0,1]]    
#  0 0 0 0
#  1 0 1 0
#  0 1 0 0
#  1 0 1 0
#  0 0 0 1

tap = 2  # water poured in 3rd column
bucket = [0,0,0,0]  # bucket at the bottom of each column
x = 10  # number of units of water poured

bucket[tap] = x

for i in range(len(grid)):
    for j in range(len(grid[0])):
        if grid[i][j] == 1:
            temp = bucket[j]
            bucket[j] = 0
            if j-1 >= 0:
                bucket[j-1] += temp/2
            if j+1 < len(bucket):
                bucket[j+1] += temp/2
print(bucket) 
