t=int(input())
for i in range(t):
    n=input()
    e=False
    s=0
    z=False
    if int(n)==0:
        print("red")
        exit(0)

        
    for j in n:
        a=int(j)%10
        s+=a
        if a==0:
            z=True
        elif a%2==0:
            e=True

    # print(s,e,z)
    if s%3==0 and e and z:
        print("red")
    else:
        print("cyan")