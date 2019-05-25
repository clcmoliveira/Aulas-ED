#include "fila.h"

struct fila {
	int * dados;
	int prim, ult, cont, capacidade;
};

Fila * cria_fila(int capacidade) {
	//ponteiro da estrutura Fila recebe os dados do tipo Fila
	Fila * f = (Fila *) malloc (sizeof(Fila));
	if(f){
		f->dados = (int *) malloc (capacidade * sizeof(int));
		if(!f->dados){
			free(f);
			return NULL;
		}
		f->prim = f->ult = f->cont = 0;
		f->capacidade = capacidade;
	}
	return f;
}

int fila_cheia(Fila * f) {
	return f->cont == f->capacidade;
}

int fila_vazia(Fila * f) {
	return !f->cont;
}

int proximo(int i, Fila * f) {
	return (i+1) % f->capacidade;
}

int insere_fila(int i, Fila * f) {
	if(fila_cheia(f))
		return 0;
	f->dados[f->ult] = i;
	//f->ult = (f->ult + 1) % capacidade;
	f->ult = proximo(f->ult, f);
	f->cont++;
	return 1;
}

int remove_fila(int * i, Fila * f) {
	if(fila_vazia(f))
		return 0;
	*i = f->dados[f->prim];
	//f->prim = (f->prim + 1) % f->capacidade;
	f->prim = proximo(f->prim, f);
	f->cont--;
	return 1;
}

int ocupacao_fila(Fila * f) {
	return f->cont;
}

void mostra_fila(Fila * f) {
	int i;
	if(fila_vazia(f))
		printf("Fila Vazia\n");
	else {
		for(i = f->prim; i != f->ult; proximo(i, f))
			printf("%d ", f->dados[i]);
	}
}

void mostra_vetor(Fila * f){
	printf("\n");
	
}
