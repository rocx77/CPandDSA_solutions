# N = int(input())
N = 18

if(N<5):
    c5 = 0


else:
    if N%5 == 4:
        c5 = N//5
    else:
        c5 = N//5 - 1
    
    N = N - c5*5

if N%2 == 1:
    c2 = N//2
    c1 = 1
else:
    c2 = N//2 - 1
    c1 = 2


print((c5+c2+c1),c5,c2,c1)