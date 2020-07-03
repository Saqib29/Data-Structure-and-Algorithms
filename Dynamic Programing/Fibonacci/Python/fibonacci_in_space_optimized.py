
def fib(num):
    a = 0
    b = 1
    for i in range(2,num+1):
        c = a + b
        a = b
        b = c
    return c

while True:
    n = int(input())
    if n<= 0: break
    print("fibonacci of ",n,"th number is ",fib(n))

    
