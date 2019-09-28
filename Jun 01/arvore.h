#include "no.h"

//Estudar HeapSort

typedef struct {
	No * raiz;
} Arvore;

Arvore * cria_arvore();

int arvore_vazia(Arvore *);
void insere_rec(No *, No *);
int insere(int, Arvore *);

void mostra_rec(No *);
void mostra_em_ordem(Arvore *);

