#include "pilha.h"

int main (int argc, char *argv[]){
	struct pilha p;
	inicia_pilha(&p);
	mostra_pilha(&p);

	while (push(i, &p)){
		printf("%d Empilhado com sucesso.\n", i);
		mostra_pilha(&p);
		i = i * 10;
	}

	while(pop(*i, &p)){
		printf("%d Desempilhado com sucesso.\n", i);
		mostra_pilha(&p);
	}

	int main(){
		char c;
		struct pilha p;
		inicia_pilha(&p);

		int certo = 1

		while ((c = getchar()) ! = '\n' && certo){
			if (c == '(')
				push(c, &p);
			else if (!pop &c, &p)
				certo = 0;

		}
		if (!pilha_vazia(&p))
			certo = 0;
		if (certo)
			printf("Expressão Válida\n");
		else
			printf("Expressão Inválida\n");
	}
	
	return 0;
}