#include "pilha.c"

int main(int argc, char *argv[]) {
	int i;
	/*for(i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}*/
	
	struct pilha *p = inicia_pilha(10);
	if(p){
		printf("Pilha criada com sucesso.\n");
		srand(time(0));
		do{
			if(rand() % 2)
				push(rand() % 10, p);
			else
				pop(&i, p);
			mostra_pilha(p);
		} while(!pilha_vazia(p));
	} else
		printf("Um erro aconteceu.\n");
	return 0;
}
