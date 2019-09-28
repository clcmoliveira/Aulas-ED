#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct meu_vetor {
	int tamanho, ocupacao, *v;
};

int redimensiona(int novo_tamanho, struct meu_vetor *p);
struct meu_vetor * cria_vetor(int t);
struct meu_vetor *libera(struct meu_vetor *p);
int esta_cheio(struct meu_vetor *p);
int esta_vazio(struct meu_vetor *p);
int insere(int i, struct meu_vetor *p);
int insere_dois_elementos(int i, int j, struct meu_vetor *p);
int remov (int * i, struct meu_vetor *p);
void vetor_tamanho_n(int t, struct meu_vetor *apont);

