import java.util.Scanner;

public class FibonacciInSpaceOptimized{
	
	public static int fib(int n){
		int a=0, b=1;
		int	c;
		for(int i=2; i<=n; i++){
			c = a + b;
			a = b;
			b = c;
		}
		return b;
	}
	
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n;
		System.out.println("Input Numbers(Max_Limit: 20): ");
		while(true){
			n = input.nextInt();
			if(n<=0 || n >= 21) break;
			System.out.println(fib(n));
		}
	}
}