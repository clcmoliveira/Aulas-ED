#include "arvore.h"

Arvore * cria_arvore(){
	Arvore * a = (Arvore *) malloc (sizeof(Arvore));
	if(!a) return 0;
	
	a->raiz = NULL;
	return a;
}


int arvore_vazia(Arvore *a){
	return !a->raiz;
}

void insere_rec(No * novo, No * atual){
	if(novo->info > atual->info) //vai para a direita
		if(!atual->dir) 
			atual->dir = novo;
		else 
			insere_rec(novo, atual->dir);
	else //vai para a esquerda
		if(!atual->esq) 
			atual->esq = novo;
		else 
			insere_rec(novo, atual->esq);
}

int insere(int i, Arvore * a){
	No * novo = cria_no(i);
	if(!novo) return 0;
	
	if(arvore_vazia(a)) 
		a->raiz = novo;
	else
		insere_rec(novo, a->raiz);
	return 1;
}

void mostra_rec(No * atual){
	if(atual->esq)
		mostra_rec(atual->esq);
	printf("%d ", atual->info);
	if(atual->dir)
		mostra_rec(atual->dir);
	
}

void mostra_em_ordem(Arvore *a){
	printf("\n");
	if(arvore_vazia(a))
		printf("Arvore esta vazia!");
	
	mostra_rec(a->raiz);
		
	printf("\n");
}
