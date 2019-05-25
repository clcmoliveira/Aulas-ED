#include "no.h"

struct lista{
	No * prim;
};

void inicia_lista(struct lista *);
int lista_vazia(struct lista *);

int insere_inicio(int, struct lista *);
int insere_fim(int, struct lista *);

void remove_inicio(int, struct lista *);
void remove_fim(int, struct lista *);

void mostra_lista(struct lista *, char *);
