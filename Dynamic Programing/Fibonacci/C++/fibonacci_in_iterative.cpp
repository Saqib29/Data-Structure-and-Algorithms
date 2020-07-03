#include <iostream>
using namespace std;
int fib(int n)
{
    int f[n];
    f[0] = 0;
    f[1] = 1;

    for(int i=2; i<=n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
int main()
{
    int n;
    while(true){
        cin >> n;
        if(n <= 0) break;
        cout << fib(n) << endl;
    }
    return 0;
}