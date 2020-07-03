#include <iostream>
using namespace std;
int fib(int n)
{
    int a=0,  b=1, c;
    if(n == 0) return a;
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
int main()
{
    int n;
    while(1){
        cin >> n;
        if(n <= 0) break;
        cout << "Fibonacci of " << n << "th number is " << fib(n) << endl;
    }
    return 0;
}
