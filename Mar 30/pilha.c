#include "pilha.h"

struct pilha *inicia_pilha(int capacidade){
	struct pilha * p;
	p = (struct pilha *) malloc(sizeof(struct pilha));
	if(p){
		p->dados = (int *) malloc(capacidade * sizeof(int));
		if(p->dados){
			p->topo = 0;
			p->capacidade = capacidade;
		} else
			return NULL;
	}
	return p;
}

int pilha_cheia(struct pilha *p){
	return (p->topo == p->capacidade);
}

int pilha_vazia(struct pilha *p){
	return !p->topo;
}

int push(int i, struct pilha *p){
	if(pilha_cheia(p))
		return 0;
	p->dados[p->topo] = i;
	p->topo++;
	return 1;
}

int pop(int *i, struct pilha *p){
	if(pilha_vazia(p))
		return 0;
	//p->topo--;
	*i = p->dados[--p->topo];
	return 1;
}

int consulta_topo(struct pilha*p){
	
}

