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
	printf("\n");
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

/*
	Exemplo de um insertion sort
		for(i = 1; i < n; i++){
		chave = v[i];
		j = i-1;
		while(j >= 0 && v[j] > chave){
			v[j+1] = v[j];
		}
		v[j+1] = chave;
	}
*/

void insertion(int *v, int n){
	int i, j, chave;
		for(i = 1; i < n; i++){
		chave = v[i];
		j = i-1;
		while(j >= 0 && v[j] > chave){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = chave;
	}
}

int main(){
	int *v, n;
	time_t ini_bubble, ini_insert, fim_bubble, fim_insert;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	if(!v)
		printf("Um erro aconteceu \n");
	srand(time(0));
	printf("Vetor original: ");
	preenche_vetor(v, n);
	mostra_vetor(v, n);
	ini_bubble = time(0);
	ini_insert = time(0);
	printf("Vetor ordenado por Bubblesort: ");
	bubble(v, n);
	mostra_vetor(v, n);
	fim_bubble = time(0);
	printf("Bubble demorou %d segundos.\n", fim_bubble-ini_bubble);
	insertion(v, n);
	mostra_vetor(v, n);
	fim_insert = time(0);
	printf("Insert demorou %d segundos.\n", fim_insert-ini_insert);
	return 0;
}

/*Para o lar: pesquisar o selection sort, implementá-lo e compará-lo com os outros algorítimos elementares*/
