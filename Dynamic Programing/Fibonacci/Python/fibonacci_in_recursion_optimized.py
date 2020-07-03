memo = [-1]*20

def fib(n):
    if n == 0 or n == 1: return n

    if memo[n] != -1: return memo[n]

    memo[n] = fib(n-1) + fib(n-2)
    return memo[n]

while True:
    n = int(input())
    if n<= 0: break
    print(fib(n))

    
