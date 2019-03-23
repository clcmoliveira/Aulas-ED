#include<stdio.h>
#include<stdlib.h>
#include<time.h>


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

//Método de Busca Bubble Sort
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
Considerar um vetor de tamanho n
Comparação: (n-1) + (n-2) + (n-3) + ... + 3 + 2 + 1

1, 2, 3, ..., (n-2), (n-1) é uma PA
a1 = 1, r = 1, an = n-1, n = n-1

Spa = (a1 + an)*n/2 => Spa = n(n-1)/2 = n²-n/2
f(x) = x²
f'(x) = 2x
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


//MÃ©todo de Busca Simples
int busca_simples(int x, int v[], int n){
	int i;
	for (i = 0; i < n; i++){
		if(x == v[i])
			return i;
	}
	return -1;
}

//MÃ©todo de Busca BinÃ¡ria
int busca_binaria(int x, int v[], int n){
	int ini = 0, fim = n-1, meio;
	while (ini <= fim){
		meio = (ini + fim) / 2;
		if(x == v[meio])
			return meio;
		if(x < v[meio])
			return meio + 1;
		else
			fim = meio - 1;
		//printf("%d foi encontrado na posicao %d\n", x, meio);
	}
	return -1;
}

int main(){
	int *v, n, x;
	time_t ini, fim_bubble, fim_insert, fim_select, fim_busca;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	if(!v)
		printf("Um erro aconteceu \n");
	
	printf("Informe o valor a ser procurado: ");
	scanf("%d", &x);	
	
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
	
	/*printf("Bubble Sort demorou %d segundos.\n", fim_bubble-ini);
	printf("Insertion demorou %d segundos.\n", fim_insert-ini);
	printf("Selection demorou %d segundos.\n", fim_select-ini);*/
	
	if(fim_bubble-ini < fim_insert-ini && fim_bubble-ini < fim_select-ini){
		printf("Bubble Sort eh mais rapido e levou %d segundos.\n", fim_bubble-ini);
	} else if (fim_insert-ini < fim_select-ini){
		printf("Inserction eh mais rapido e levou %d segundos.\n", fim_insert-ini);
	} else {
		printf("Selection eh mais rapido e levou %d segundos.\n", fim_select-ini);
	}
	
	int res_busca = busca_binaria(x, v, n);
	if(res_busca = -1)
		printf("O valor de %d nao foi encontrado.\n", x);
	else{
		fim_busca = time(0);
		printf("Busca levou %d segundos para ser realizada.\n O valor de %d foi encontrado na posicao %d", fim_busca-ini, x, res_busca);	
	}
}
