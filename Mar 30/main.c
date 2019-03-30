#include "pilha.c"

int main(int argc, char *argv[]) {
	/*int i;
	for(i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}*/
	
	struct pilha *p = inicia_pilha(10);
	if(p)
		printf("Pilha criada com sucesso.\n");
	else
		printf("Um erro aconteceu.\n");
	return 0;
}
