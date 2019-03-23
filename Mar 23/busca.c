/*
Considerar um vetor de tamanho n
Compara��o: (n-1) + (n-2) + (n-3) + ... + 3 + 2 + 1

1, 2, 3, ..., (n-2), (n-1) � uma PA
a1 = 1, r = 1, an = n-1, n = n-1

Spa = (a1 + an)*n/2 => Spa = n(n-1)/2 = n�-n/2
f(x) = x�
f'(x) = 2x
*/
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


//Método de Busca Simples
int busca_simples(int x, int v[], int n, int * cont){
	int i;
	*cont = 0;
	for (i = 0; i < n; i++){
		(*cont)++;
		if(x == v[i])
			return i;
	}
	return -1;
}

//Método de Busca Binária
int busca_binaria(int x, int v[], int n, int * cont){
	int ini = 0, fim = n-1, meio;
	*cont = 0;
	while (ini <= fim){
		(*cont)++;
		meio = (ini + fim) / 2;
		if(x == v[meio])
			return meio;
		if(x < v[meio])
			return meio + 1;
		else
			fim = meio - 1;
	}
	return -1;
}

int main(){
	
	//Parte 1 - Declaracao das variaveis
	int *v, n, x;
	int res_busca_bin, res_busca_sim, cont_busca_bin, cont_busca_sim;
	time_t ini, fim_bubble, fim_insert, fim_select, fim_busca_bin, fim_busca_sim;
	
	//Parte 2 - Pede para o usuario informar o tamanho do vetor
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	if(!v)
		printf("Um erro aconteceu \n");
	
	//Parte 3 - Inicia o contador de segundos e os vetores
	srand(time(0));
	//Original
	printf("Vetor original: ");
	preenche_vetor(v, n);
	mostra_vetor(v, n);
	
	ini = time(0);
	
	//Bubble
	bubble(v, n);
	fim_bubble = time(0);
	printf("Vetor ordenado por Bubble Sort: ");
	mostra_vetor(v, n);
	
	//Insert
	insertion(v, n);
	fim_insert = time(0);
	printf("Vetor ordenado por Inserction: ");
	mostra_vetor(v, n);
	
	//Select
	selection(v, n);
	fim_select = time(0);
	printf("Vetor ordenado por Selection: ");
	mostra_vetor(v, n);
	
	//Compara os tempos e mostra o resultado
	if(fim_bubble-ini < fim_insert-ini && fim_bubble-ini < fim_select-ini){
		printf("Bubble Sort eh mais rapido e levou %d segundos.\n", fim_bubble-ini);
	} else if (fim_insert-ini < fim_select-ini){
		printf("Inserction eh mais rapido e levou %d segundos.\n", fim_insert-ini);
	} else {
		printf("Selection eh mais rapido e levou %d segundos.\n", fim_select-ini);
	}
	
	//Inicia a Busca
	//Parte 3 - Pede para o usuario informar qual valor a ser procurado
	printf("Informe o valor a ser procurado: ");
	scanf("%d", &x);
	res_busca_bin = busca_binaria(x, v, n, &cont_busca_bin);
	res_busca_sim = busca_simples(x, v, n, &cont_busca_sim);
	
	if(!res_busca_bin){
		if(!res_busca_sim){
			printf("O valor de %d nao foi encontrado.\n", x);
		}
	}
	
	fim_busca_bin = time(0);
		fim_busca_sim = time(0);
		if(fim_busca_bin - ini < fim_busca_sim - ini)
			printf("Busca Binaria foi mais rapida e levou %d segundos para ser realizada.\nO valor de %d foi encontrado na posicao %d\nNumero de comparacoes encontradas: %d", fim_busca_bin-ini, x, res_busca_bin, cont_busca_bin);
		else
			printf("Busca Simples foi mais rapida e levou %d segundos para ser realizada.\nO valor de %d foi encontrado na posicao %d\nNumero de comparacoes encontradas: %d", fim_busca_sim-ini, x, res_busca_sim, cont_busca_sim);
	
}
/*
	1. Colocar contadores de iterações nos algoritimos elementares de ordenação
	2. Executar varias baterias de teste com vetores de tamanhos de 100000 a 1000000 variando de 200000. Pelo menos 1000 testes em cada um*/