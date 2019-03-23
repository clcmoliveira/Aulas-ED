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

void selection(int *v, int n){
	int i, j, min, aux;
	for(i = 0; i < n-1; i++){
		min = i;
		for(j = (j+1); j < n; j++){
			if(v[j] < v[min])
				min = j;
		}
	}
	if(v[i] != v[min]){
		aux = v[i];
		v[i] = v[min];
		v[min] = aux;
	}
}


int main(){
	int *v, n;
	time_t ini, fim_bubble, fim_insert, fim_select;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	if(!v)
		printf("Um erro aconteceu \n");
	
	srand(time(0));
	printf("Vetor original: ");
	preenche_vetor(v, n);
	mostra_vetor(v, n);
	
	ini = time(0);
	
	bubble(v, n);
	fim_bubble = time(0);
	printf("Vetor ordenado por Bubble Sort: ");
	mostra_vetor(v, n);
	
	insertion(v, n);
	fim_insert = time(0);
	printf("Vetor ordenado por Inserction: ");
	mostra_vetor(v, n);
	
	selection(v, n);
	fim_select = time(0);
	printf("Vetor ordenado por Selection: ");
	mostra_vetor(v, n);
	
	printf("Bubble Sort demorou %d segundos.\n", fim_bubble-ini);
	printf("Insertion demorou %d segundos.\n", fim_insert-ini);
	printf("Selection demorou %d segundos.\n", fim_select-ini);
	
	if(fim_bubble-ini < fim_insert-ini && fim_bubble-ini < fim_select-ini ){
		printf("Bubble Sort eh mais rapido");
	} else if (fim_insert-ini < fim_select-ini){
		printf("Inserction eh mais rapido");
	} else {
		printf("Selection eh mais rapido");
	}
	
	
	return 0;
}

/*Para o lar: pesquisar o selection sort, implementá-lo e compará-lo com os outros algorítimos elementares*/
