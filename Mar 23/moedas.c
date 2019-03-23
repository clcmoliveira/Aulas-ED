#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int n, i, cont1 = 0;
	float media;
	srand(time(0));
	printf("Numero de Lancamento de Moedas: ");
	scanf("%d", &n);
	//int v = (int *) malloc (n * sizeof(int));
	for (i = 0; i < n; i++) {
		//v[i] = rand() % 2;
		//cont1 += v[i];
		cont1 += rand() % 2;
	}
	printf("\nResultado:\nCaras: %d\nCoroas: %d\n", cont1, n-cont1);
	return 0;
}