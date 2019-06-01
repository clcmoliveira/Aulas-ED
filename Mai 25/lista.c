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

int remove_inicio(int *i, struct lista * l){
	No * aux;
	if(lista_vazia(l)) return 0;
	aux = l->prim;
	*i = aux->info;
	l->prim = aux->prox; //l->prim->prox;
	libera_no(&aux);
	return 1;
}

int remove_fim(int *i, struct lista *l){
	No * aux;
	if(lista_vazia(l)) return 0;
	aux = l->prim;
	if(!aux->prox) {
		*i = aux->info;
		l->prim = NULL;
		libera_no(&aux);
	}
	else {
		while(aux->prox->prox){
			aux = aux;
		}
		*i = aux->prox->info;
		libera_no(&aux->prox);
		aux->prox = NULL;
	}
	return 1;
}

int descobre_inicio(struct lista *l){
	//if(lista_vazia(l)) return 1;
	return l->prim;
}
int descobre_fim(struct lista *l){
	//percorre a fila até encontrar a última posição
	
}


void mostra_lista(struct lista *l, char * msg){
	No * aux;
	printf("\n%s\n", msg);
	printf("\n");
	
	if(lista_vazia(l)) printf("lista vazia");
	
	aux = l->prim;
	while(aux){
		printf("%d ", aux->info);
		aux = aux->prox;
	}
	printf("\n");
}

void teste_lista(){
	int n;
	struct lista l;
	inicia_lista(&l);
	mostra_lista(&l, "Lista foi inicializada");
	insere_inicio(10, &l);
	insere_inicio(20, &l);
	insere_inicio(30, &l);
	insere_inicio(40, &l);
	mostra_lista(&l, "Listas criadas apos a insercao de inicio");
	insere_inicio(5, &l);
	insere_inicio(15, &l);
	insere_inicio(25, &l);
	insere_inicio(35, &l);
	mostra_lista(&l, "Listas criadas apos a insercao de fim");
	if(remove_inicio(&n, &l)){
		printf("\n%d foi removido do início da lista\n", n);
		mostra_lista(&l, "Lista apos a remocao de inicio da lista");
	}
	if(remove_fim(&n, &l)){
		printf("\n%d foi removido do fim da lista\n", n);
		mostra_lista(&l, "Lista apos a remocao de inicio da lista");
	}
}
