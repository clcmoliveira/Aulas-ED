#include<stdio.h>
#include<stdlib.h>

struct pilha {
	int *dados;		//vetor de dados
	int topo; 			//indicador de topo(1a posição disponível)
	int capacidade;		//tamanho do vetor escolhido
};

struct pilha *inicia_pilha(int);

int pilha_cheia(struct pilha *);
int pilha_vazia(struct pilha *);

int push(int, struct pilha *);
int pop(int *, struct pilha *);

int consulta_topo(struct pilha*);

