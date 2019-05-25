/*
	RECURSAO
	Caracterizada pela chamada de uma subrotina dentro dela mesma
	Tem que ser sempre a condição de parada

	Exemplos Clássicos:
	3 - Somando Elementos de Um vetor
*/

#include <stdio.h>

int soma (int pos, int n, int v[]) {
	if (pos == n) {
		return 0;
	}
	return v [pos] + soma (v [pos + 1], n, v);
}

int soma2 (int pos, int v[]) {
	if (pos == 0)
		return v [0];
	return v [pos] + soma2 (v [pos - 1], v);
}

/*
	Programação Dinâmica
*/

int vet_soma (int n) {
	int s = 0, i, v[n];
	for (i == 0; i < n; i++)
		s = s + v [i];
	//printf("%d\n", soma(0, n, v));
	printf("%d\n", soma2(n - 1, v));
}


/*
	Chamando o Resultado
*/

int main() {
	int n;
	printf("\nInforme um valor para o cálculo da Soma de Vetores\n");
	scanf("%d", &n);

	vet_soma(n);
	
}