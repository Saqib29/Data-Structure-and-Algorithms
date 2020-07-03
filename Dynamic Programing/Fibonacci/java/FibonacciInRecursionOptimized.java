import java.util.Scanner;

public class FibonacciInRecursionOptimized{
	public static int MAX_VALUE = 21;
	public static int f[] = new int[MAX_VALUE];
	public static int fib(int n){
		if(n == 0 || n == 1) return n;
		if(f[n] != -1) return f[n];
		
		f[n] = fib(n-1) + fib(n-2);
		return f[n];
	}
	public static void init(){
		for(int i=0; i<f.length; i++){
			f[i] = -1;
		}
	}
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.println("Enter n'th number to find fibonacci number\nMax limit 20");
		int n;
		init();
		while(true){
			n = input.nextInt();
			if(n <=0 || n>=21) break;
			System.out.println(fib(n));
		}
	}
}