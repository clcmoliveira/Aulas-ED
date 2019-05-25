/*
	Zercicio:
	Encontrar o maior elemento de um vetor
*/

#include <stdio.h>

int maior (int pos, int v[]) {
	int m;
	if (!pos)
		return v[pos];
	m = maior (pos - 1, v);
	return (m > v[pos] ? m : v[pos]);
}

int vet_maior (int n) {
	int m = 0, i, v[n];
	for (i = 0; i < n; i++)
		if (v[n] > v[n-1])
			m = v[n];

	printf("O maior elemento do vetor é %d\n", m);
}

int main(){
	int p, i, v[];
	printf("\nInforme a quantidade de elementos de um vetor:\n");
	scanf("%d", &p);
	printf("\nInforme os elementos deste vetor de %d posicoes:\n", p);
	for (i = 0; i < p; i++)
		scanf("%d", &v[i]);
	vet_maior(p);
}