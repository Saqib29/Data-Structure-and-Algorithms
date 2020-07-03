#include <stdio.h>
#define MAX_VALUE 20
#define EMPTY_VALUE -1

int memo[MAX_VALUE];

int f(int n)
{
    if(n == 0 || n == 1) return n;

    if(memo[n] != -1) return memo[n];

    memo[n] = f(n-1) + f(n-2);
    return memo[n];
}
int init()
{
    for(int n=0; n<MAX_VALUE; n++){
        memo[n] = EMPTY_VALUE;
    }
}
int main()
{
    int n;
    init();
    while(1){
        scanf("%d", &n);
        if(n <= 0) break;
        printf("%d\n", f(n));
    }
    return 0;
}
