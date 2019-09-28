#include "vetor.h"

int redimensiona(int novo_tamanho, struct meu_vetor *p){		//aumenta ou diminui o tamanho
	int j, * aux;
	
	aux = (int *)malloc(novo_tamanho * sizeof(int));
	if(!aux)													//verifica se é verdaddeiro
		return 0;
	for (j = 0; j < p->ocupacao; j++)
        aux[j] = p->v[j];
	free(p->v); 												//libera *v de inteiros
	p->v = aux;
	p->tamanho = novo_tamanho;
	return 1;
}

struct meu_vetor * cria_vetor(int t) {
	struct meu_vetor *p;
	
	//malloc
	p = (struct meu_vetor *)malloc(sizeof(struct meu_vetor));

	if (p) { // p diferente de null
    	p->v = (int *)malloc(t * sizeof(int));
    	if(!p->v)
    		return NULL;
    	p->tamanho = t;
    	p->ocupacao = 0;
	}
	//exemplo p =10A
	return p;
}

struct meu_vetor *libera(struct meu_vetor *p) {
	free(p->v);
	free(p);
	return NULL;
}

int esta_cheio(struct meu_vetor *p) {
	return (p->tamanho == p->ocupacao);
}

int esta_vazio(struct meu_vetor *p) {
	return !p->ocupacao;
}

int insere(int i, struct meu_vetor *p) {
	if (esta_cheio(p) && !redimensiona(2 * p->tamanho, p))
    	return 0;
	p->v[p->ocupacao++] = i;									//coloca o dado normalmente
	return 1;
}

int insere_dois_elementos(int i, int j, struct meu_vetor *p) {
	if (esta_cheio(p) && !redimensiona(2 * p->tamanho, p))
    	return 0;
	p->v[p->ocupacao++] = i;									//coloca o dado normalmente
	p->v[p->ocupacao++] = j;
	return 1;
}

int remov (int * i, struct meu_vetor *p){
	if (esta_vazio(p))
		return 0;
	*i = p->v[--p->ocupacao];
	if(p->ocupacao <= p->tamanho /4 && redimensiona(p->tamanho/2, p))
		return 0;
	return 1;
}

void mostra_maior_menor(int t, struct meu_vetor *apont){
	int maior, menor = 0;
	apont = cria_vetor(t);
	if(!apont) 
		printf("Falha na alocacao da estrutura\n");
	printf("Sucesso\n");
	for(t = 1; t <=42; t++){
		if(insere(t, apont)){
			if(maior > t)
				maior = t;
			else if (menor < t)
				menor = t;
			printf("Alocado\n");
		} else
			printf("Não alocado\n");
	}
}

int maior(int *i, int *j){
	return *i <= *j;
}

void troca(int *i, int *j){ //Chamar por referencia
	int aux = *i;
	*i = *j;
	*j = aux;
}

void vetor_tamanho_n(int t, struct meu_vetor *apont){
	apont = cria_vetor(t);
	if (!apont)
		printf("Falha na alocacao da estrutura.\n");
	printf("Sucesso!\n");
	for (t = 1; t <= 42; t++){
		if(insere(t, apont))
			printf("Alocado\n");
			//exibe_vetor(apont);
		else
			printf("Falha na Alocação\n");
	}
	while(remov(&t, apont)){
		printf("%d foi removido\n", t);
		//exibe_vetor(apont);
	}
    apont = libera(apont);
}

int primeiro_elemento(struct meu_vetor * vm){
	return vm->v[0];
}

int quantidade(struct *vm){
	return count(vm->ocupacao != null);
}


int maior_e_pos(struct meu_vetor *vm, int *maior, int *pos){
	if(esta_vazio(vm)) 
		return 0;
	int i;
	*pos = 0;
	*maior = vm->v[0];
	for (i = 0; i < vm->ocupacao; i++){
		if (vm->v[i] > *maior){
			*pos = i;
			*maior = vm->v[i];
		}
	}
	return 1;
}
