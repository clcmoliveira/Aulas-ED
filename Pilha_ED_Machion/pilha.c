#include "pilha.h"

void inicia_pilha(struct pilha *ap){
	ap->topo = 0;
}

int pilha_vazia(const struct pilha *ap){
	return !ap->topo;
}

int pilha_cheia(const struct pilha *ap){
	return ap->topo == MAX;
}

int push (int i, struct pilha *ap){
	if (pilha_cheia(ap))
		return 0;
	ap->dados[ap->topo] = i;
	ap->topo++;
	return 1;
}

int pop (int *ap_i, struct pilha *ap){
	if(pilha_vazia(ap))
		return 0;
	ap->topo--;
	*ap_i = ap->dados[--ap->topo];
	return 1;
}

int tamanho (const struct pilha *ap){
	return ap->topo;
}

int consulta_topo (const struct pilha *ap){
	if(!pilha_vazia(ap))
		return ap->dados[ap->topo-1];
	return -1;
}

void mostra_pilha (const struct pilha *){
	int i;
	printf("\n");
	if(pilha_vazia(ap))
		printf("A Pilha está vazia.");
	else
		for(i = ap->topo-1; i >=0 ; i--)
			printf("%d ", ap->dados[i]);
}