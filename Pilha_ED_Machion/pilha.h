#include <stdio.h>
#include <stdlib.h>
#define MAX 10;

struct pilha {
	int topo;
	int dados[MAX];
};

//FUNÇÃO QUE INICIALIZA A PILHA
void inicia_pilha (struct pilha *);

//FUNÇÕES QUE DETERMINAM SE A PILHA ESTÁ VAZIA OU TOTALMENTE PREENCHIDA
int pilha_vazia (const struct pilha *);
int pilha_cheia (const struct pilha *);

//FUNÇÕES QUE BUSCAM PREENCHER E ESVAZIAR A PILHA
int push (int, struct pilha *);
int pop (int *, struct pilha *);

//FUNÇÕES QUE DEVOLVEM O TAMANHO E QUAL ELEMENTO ESTÁ NA POSIÇÃO MÁXIMA NAQUELE INSTANTE
int tamanho (const struct pilha *);
int consulta_topo (const struct pilha *);

//FUNÇÃO QUE MOSTRA OS ELEMENTOS PRESENTES NA PILHA
void mostra_pilha (const struct pilha *);