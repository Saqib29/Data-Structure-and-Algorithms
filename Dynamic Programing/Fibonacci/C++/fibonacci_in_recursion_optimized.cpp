#include <iostream>
#define MAX_VALUE 20
#define EMPTY_VALUE -1
using namespace std;
int memo[MAX_VALUE];
int fib(int n)
{
    if(n == 0 || n == 1) return n;
    if(memo[n] != -1) return memo[n];

    memo[n] = fib(n-1) + fib(n-2);
    return memo[n];
}
int init()
{
    for(int i = 0; i<= sizeof(memo)/sizeof(memo[0]); i++){
        memo[i] = EMPTY_VALUE;
    }
}
int main()
{
    int n;
    init();
    while(true){
        cin >> n;
        if(n <= 0) break;
        cout << fib(n) << endl;
    }
    return 0;
}
