using System;
using System.Collections.Generic;
using System.Text;

namespace Fibonacci
{
    class FibonacciRecursionoptimized
    {
        static int MAX_VALUE = 20;
        static int EMPTY_VALUE = -1;
        public static int[] memo = new int[MAX_VALUE+1];
        public static void init()
        {
            for (int i=0; i<=MAX_VALUE; i++)
            {
                memo[i] = -1;
            }
        }
        public int fib(int n)
        {
            if (n == 0 || n == 1) return n;
            if (memo[n] != -1) return memo[n];

            memo[n] = fib(n - 1) + fib(n - 2);
            return memo[n];
        }
    }
}
