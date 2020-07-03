#include <stdio.h>
int fib(int n)
{
    int a=0, b=1, c;
    if(n==0) return a;
    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    while(1){
        scanf("%d", &n);
        if(n <= 0) break;
        printf("%d\n", fib(n));
    }
    return 0;
}
