using System;
using System.Collections.Generic;
using System.Text;

namespace Fibonacci
{
    class FibonaccSpaceoptimized
    {
        public int fib(int n)
        {
            int a = 0, b = 1, d;
            for(int k=2; k<=n; k++)
            {
                d = a + b;
                a = b;
                b = d;
            }
            return b;
        }
    }
}
