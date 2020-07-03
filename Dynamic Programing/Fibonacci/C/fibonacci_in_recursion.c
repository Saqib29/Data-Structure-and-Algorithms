#include <stdio.h>
int f(int n)
{
    if(n == 0 || n == 1) return n;

    return f(n-1) + f(n-2);
}
int main()
{
    int n;
    while(1){
        scanf("%d", &n);
        if(n < 0)break;
        printf("Fibonacci of %dth number is %d\n", n, f(n));

    }
    return 0;
}
