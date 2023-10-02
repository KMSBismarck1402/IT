t = int(input())

for _ in range(t):
    k, n = [int(i) for i in input().split()]
    a = bin(n)[2:]
    a = a[::-1]
    r = 0
    p = 1
    for i in range(len(a)):
        if(a[i] == '1'):
            r += p
        p *= k
    print(r)