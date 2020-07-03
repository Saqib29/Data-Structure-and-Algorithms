import java.util.Scanner;
public class FibonacciInRecursion {

    public static int fib(int n)
    {
        if(n==0 || n==1) return n;
        return fib(n-1) + fib(n-2);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        while(true){
            n = input.nextInt();
            if (n <= 0) break;
            System.out.println(fib(n));
        }
    }
    
}