#include "no.h"

No * cria_no(int i){
	No * n = (No *) malloc(sizeof(No));
	if(!n) return NULL;
	
	n->info = i;
	n->dir = NULL;
	n->esq = NULL;
	return n;
}

int libera_no(pont_no *n){
	//if(!*n) return 0;
	
	free(*n);
	*n = NULL;
	//return 1;
}

pont_no libera(pont_no pn){
	if(!pn) return 0;
	
	free(pn);
	return NULL;
}
