#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Esqueleto de um laço Bubblesort
	int i, j, aux;
	for(i = 1; i < n; i++){
		for(j = 0; j < n-i; j++){
			if (v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}


Considerar um vetor de tamanho n
Comparação: (n-1) + (n-2) + (n-3) + ... + 3 + 2 + 1

1, 2, 3, ..., (n-2), (n-1) é uma PA
a1 = 1, r = 1, an = n-1, n = n-1

Spa = (a1 + an)*n/2 => Spa = n(n-1)/2 = n²-n/2
f(x) = x²
f'(x) = 2x
*/

void preenche_vetor(int *v, int n){
	int i;
	for(i = 0; i < n; i++){
		v[i] = rand();
	}
}

void mostra_vetor(int *v, int n){
	int i;
	printf("\n");
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
}

void bubble(int *v, int n){
	int i, j, aux;
	for(i = 1; i < n; i++){
		for(j = 0; j < n-i; j++){
			if (v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}

int main(){
	int *v, n;
	printf("Digite o tamanho do vetor: \n");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	if(!v)
		printf("Um erro aconteceu \n");
	srand(time(0));
	preenche_vetor(v, n);
	mostra_vetor(v, n);
	bubble(v, n);
	mostra_vetor(v, n);

	return 0;
}
