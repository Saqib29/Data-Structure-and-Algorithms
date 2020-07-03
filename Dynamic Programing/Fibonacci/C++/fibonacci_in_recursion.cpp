#include <iostream>
using namespace std;
int fib(int n)
{
    if(n == 0 || n == 1) return n;

    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    do{
        cin >> n;
        if(n < 0) break;
        cout << fib(n) << endl;
    }while(true);

    return 0;
}
