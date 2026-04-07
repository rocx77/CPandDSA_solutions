t = int(input())

for _ in range(t):
    n = int(input())

    a = 3*n
    b = (3*n) - 1

    c = 1
    l = []
    for i in range(n):
        l.append(c)
        l.append(b)
        l.append(a)

        c += 1
        b -= 2
        a -= 2

    print(*l)

    