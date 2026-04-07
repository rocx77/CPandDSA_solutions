t = int(input())

for _ in range(t):
    a = list(map(int , input().split()))

    m = max(a)

    for i in range(7):
        a[i] *= -1

    s = sum(a) + 2*m
    print(s)