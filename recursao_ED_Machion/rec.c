/*
	RECURSAO
	Caracterizada pela chamada de uma subrotina dentro dela mesma
	Tem que ser sempre a condição de parada

	Exemplos Clássicos:
	1 - Fatorial
*/

#include <stdio.h>

int fat (int n) {
	if (n == 0 | n == 1) {
		return 1;
	}
	return n * fat (n-1);
}

/*
	Programação Dinâmica
*/

int vet_fat (int n){
	int v[n], i;
	v[0] = v[1] = 1;
	for (i == 2; i < n; i++)
		v[i] = i * v [i-1];	
}


/*
	Chamando o Resultado
*/

int main() {
	int n;
	printf("\nInforme um valor para o cálculo da fatorial\n");
	scanf("%d", &n);

	printf("%d\n", vet_fat(n));
}