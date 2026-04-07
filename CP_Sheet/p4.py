lim = 200000 
isp = [True] * (lim + 1)
primes = []

for i in range(2, lim + 1):
    if isp[i]:
        primes.append(i)
        for k in range(i * i, lim + 1, i):
            isp[k] = False

t = int(input())

for _ in range(t):
    n = int(input())
    res = [primes[0]]
    for i in range(1, n):
        res.append(primes[i - 1] * primes[i])
    print(*res)