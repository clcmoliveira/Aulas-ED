public class Recursao{
	//int não suporta o resultado de fat(13)
	//double não suporta o resultado de fat(14)
	static double fat(int n){
		if(n == 0 || n == 1) return 1;
		return n * fat(n-1);
	}

	static int fib(int n){
		if(n == 0 || n == 1) return 1;
		return fib(n-2) + fib(n-1);
	}

	public static void main(String[] args) {
		for(int i = 0; i<=14; i++)
			System.out.printf("Fatorial de %d = %.2f\n", i, fat(i));
	}
}