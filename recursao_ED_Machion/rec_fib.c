/*
	RECURSAO
	Caracterizada pela chamada de uma subrotina dentro dela mesma
	Tem que ser sempre a condição de parada

	Exemplos Clássicos:
	2 - Fibonacci
*/

#include <stdio.h>

int fib (int n) {
	if (n == 0 | n == 1) {
		return 1;
	}
	return fib (n - 1) + fib (n - 2);
}

/*
	Programação Dinâmica
*/

int vet_fib (int n){
	int v[n], i;
	v[0] = v[1] = 1;
	for (i == 2; i < n; i++)
		v[i] = v [i - 1] + v [i - 2];	
}


/*
	Chamando o Resultado
*/

int main() {
	int n;
	printf("\nInforme um valor para o cálculo da Fibonacci\n");
	scanf("%d", &n);

	printf("%d\n", vet_fib(n));
}