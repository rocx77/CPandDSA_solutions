isp = [ True] * 10**7
primes = []

for i in range(2 , 10**4):
    if isp[i]:
        primes.append(i)
        if(len(primes) == 10**4):
            break
        for k in range(i*i , 10**7 , i):
            isp[k] = False

print(len(primes))