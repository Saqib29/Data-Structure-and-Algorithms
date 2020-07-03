def fib(num):
    f = [0, 1]
    while len(f) <= num:
        f.append(0)
    for n in range(2,num+1):
        f[n] = f[n-1] + f[n-2]
    return f[num]
while(True):
    n = int(input())
    if n<=0: break
    print(fib(n))
