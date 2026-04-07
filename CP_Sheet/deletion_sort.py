t = int(input())

for _ in range(t):
    n = int(input())

    arr = list(map(int ,input().split()))
    if arr == sorted(arr):
        print(len(arr))
    else:
        print(1)


    