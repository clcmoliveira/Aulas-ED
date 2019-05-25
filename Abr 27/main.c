#include "fila.h"
#include <time.h>

int main() {
	Fila *f = cria_fila(10);
	int n;
	srand (time(0));
	do {
		if(rand() % 2)
			if(insere_fila(rand() % 10, f))
				printf("%d entrou na fila\n", n);
		else {
			if(remove_fila(&n, f))
				printf("%d saiu da fila \n", n);
		}
		mostra_fila(f);
	} while(!fila_vazia(f));
	return 0;
}
