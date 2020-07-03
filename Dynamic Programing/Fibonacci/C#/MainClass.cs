using System;

namespace Fibonacci
{
    class MainClass
    {
        static void Main(string[] args)
        {
            int n;

            /*
            FibonacciIterative i = new FibonacciIterative();
            Console.WriteLine("Enter Input(Max_Limit: 20)");
            while (true)
            {
                n = int.Parse(Console.ReadLine());
                if (n <= 0 || n >= 21) break;
                Console.WriteLine(i.fib(n));
            }*/

            /*
            n = 0;
            FibonaccSpaceoptimized s = new FibonaccSpaceoptimized();
            Console.WriteLine("Enter Input(Max_Limit: 20)");
            while (true)
            {
                n = int.Parse(Console.ReadLine());
                if (n <= 0 || n >= 21) break;
                Console.WriteLine(s.fib(n));
            }
            */
            /*
            n = 0;
            FibonacciRecursionoptimized o = new FibonacciRecursionoptimized();
            Console.WriteLine("Enter Input(Max_Limit: 20)");
            FibonacciRecursionoptimized.init();
            while (true)
            {
                n = int.Parse(Console.ReadLine());
                if (n <= 0 || n >= 21) break;
                Console.WriteLine(o.fib(n));
            }
            */
            
            n = 0;
            FibonacciRecursion r = new FibonacciRecursion();
            Console.WriteLine("Enter Input(Max_Limit: 20)");
            while (true)
            {
                n = int.Parse(Console.ReadLine());
                if (n <= 0 || n >= 21) break;
                Console.WriteLine(r.fib(n));
            }
            
        }
    }
}
