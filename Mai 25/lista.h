#include "no.h"

struct lista{
	No * prim;
};

void inicia_lista(struct lista *);
int lista_vazia(struct lista *);

int insere_inicio(int, struct lista *);
int insere_fim(int, struct lista *);

int remove_inicio(int *i, struct lista *);
int remove_fim(int *i, struct lista *);

int descobre_inicio(struct lista *);
int descobre_fim(struct lista *);

void mostra_lista(struct lista *, char *);
