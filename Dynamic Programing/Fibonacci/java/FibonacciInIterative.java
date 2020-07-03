import java.util.Scanner;
public class FibonacciInIterative{
	public static int fib(int num)
	{
		int[] f = new int[num+1];
		f[0] = 0;
		f[1] = 1;
		for(int n=2; n<=num; n++){
			f[n] = f[n-1] + f[n-2];
		}
		return f[num];
	}
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n;
		while(true){
			n = input.nextInt();
			if(n<=0) break;
			System.out.println(fib(n));
		}
	}
}