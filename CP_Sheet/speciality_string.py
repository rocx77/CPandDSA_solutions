t = int(input())

for _ in range(t):
    n = int(input())

    s = input()

    st = []

    for c in s:
        if st and c == st[-1]:
            st.pop()

        else:
            st.append(c)

    if len(st) == 0:
        print("YES")
    else:
        print("NO")
        