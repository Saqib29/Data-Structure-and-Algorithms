def fib(n):
    if n == 0 or n == 1:
        return n
    return fib(n-1) + fib(n-2)

while True:
    n = int(input())
    if n<=0: break
    print(fib(n))
