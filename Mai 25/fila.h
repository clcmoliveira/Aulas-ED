#include <stdio.h>
#include <stdlib.h>

//crio a estrutura e a apelido por meio da typedef
typedef struct fila Fila;

//crio a fila, a partir de um tamanho (inteiro) como par�metro
Fila * cria_fila(int);

//pergunto se a fila est� cheia e, por meio de um ponteiro, uso a estrutura como refer�ncia
int fila_cheia(Fila *);

//pergunto se a fila est� vazia e, por meio de um ponteiro, uso a estrutura como refer�ncia
int fila_vazia(Fila *);

//insiro um dado (inteiro) na Fila e, por meio de um ponteiro, uso a estrutura como refer�ncia
int insere_fila(int, Fila *);

//removo um dado (inteiro) na Fila e, por meio de um ponteiro, uso a estrutura como refer�ncia
int remove_fila(int *, Fila *);

//conto o tamanho da Fila, por meio de um ponteiro.
int ocupacao_fila(Fila *);

//mostre os elementos da fila
void mostra_fila(Fila *);
