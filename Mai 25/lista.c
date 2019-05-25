#include "lista.h"

void inicia_lista(struct lista *l){
	l->prim = NULL;
}

int lista_vazia(struct lista *l){
	return !l->prim;
	/*if(l->prim)return 1;
	else return 0;*/
}

int insere_inicio(int i, struct lista *l){
	No * novo = cria_no(i);
	if(novo){
		if(lista_vazia(l)) novo->prox = l->prim;
		l->prim = novo;
		return 1;
	}
	return 0;
}

int insere_fim(int i, struct lista *l){
	No * aux, * novo;
	novo = cria_no(i);
	if(novo){
		if(lista_vazia(l)) l->prim = novo;
		else {
			aux = l->prim;
			while(aux->prox){
				aux = aux->prox;
			}
			aux->prox = novo;
		}
		return 1;
	}
	return 0;
}

void remove_inicio(int n, struct lista * l){
}

void remove_fim(int n, struct lista *l){
}

void mostra_lista(struct lista *l, char * msg){
	No * aux;
	printf("\n%s\n", msg);
	printf("\n");
	if(lista_vazia(l)) printf("lista vazia");
	else{
		aux = l->prim;
		while(aux){
			printf("%d ", aux->info);
			aux = aux->prox;
		}
	}
	printf("\n");
}

void teste_lista(){
	struct lista l;
	inicia_lista(&l);
	mostra_lista(&l, "Exibindo lista");
}
