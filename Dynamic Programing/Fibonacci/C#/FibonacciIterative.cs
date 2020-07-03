using System;
using System.Collections.Generic;
using System.Text;

namespace Fibonacci
{
    class FibonacciIterative
    {
        public int fib(int num)
        {
            int[] f = new int[num+1];
            f[0] = 0;
            f[1] = 1;
            for(int n=2; n<=num; n++)
            {
                f[n] = f[n - 1] + f[n - 2];
            }
            return f[num];
        }
    }
}
