#include <stdio.h>
int fib(int num)
{
    int f[num];
    f[0] = 0;
    f[1] = 1;

    for(int n=2; n<=num; n++){
        f[n] = f[n-1] + f[n-2];
    }
    return f[num];
}
int main()
{
    int n;
    while(1){
        scanf("%d", &n);
        if(n <= 0)break;
        printf("Fibonacci of %dth number is %d\n", n, fib(n));

    }
    return 0;
}
