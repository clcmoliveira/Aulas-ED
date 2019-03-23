#include <stdio.h>
#include <stdlib.h>

struct vetor_magico {
	int tamanho, ocupacao;
	int *v;
};


int redimensiona(int novo_tamanho, struct vetor_magico *p){		//aumenta ou diminui o tamanho
	int j, * aux;
	
	aux = (int *)malloc(novo_tamanho * sizeof(int));
	if(!aux)													//verifica se Ã© verdaddeiro
		return 0;
	for (j = 0; j < p->ocupacao; j++)
        aux[j] = p->v[j];
	free(p->v); 												//libera *v de inteiros
	p->v = aux;
	p->tamanho = novo_tamanho;
	return 1;
}
// prototipo
// tipo nome (conjunto parametro);
//(struct vetor_magico *) cria_vetor(int t)
struct vetor_magico * cria_vetor(int t) {
	struct vetor_magico *p;
	
	//malloc
	p = (struct vetor_magico *)malloc(sizeof(struct vetor_magico));

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

struct vetor_magico *libera(struct vetor_magico *p) {
	free(p->v);
	free(p);
	return NULL;
}

int esta_cheio(struct vetor_magico *p) {
	return (p->tamanho == p->ocupacao);
}

int esta_vazio(struct vetor_magico *p) {
	return !p->ocupacao;
}

int insere(int i, struct vetor_magico *p) {
	if (esta_cheio(p))											//precisa aumentar
    	if(!redimensiona(2 * p->tamanho, p))
    		return 0;
	p->v[p->ocupacao++] = i;									//coloca o dado normalmente
	// SAME:
	// p->v[p->ocupacao] = i;
	// p->ocupacao++;
	return 1;
}

void exibe_vetor(struct vetor_magico * p){
	int i;
	printf("\nTamanho Atual: %d, Ocupação Atual: %d\n", p->tamanho, p->ocupacao);
	
	if(esta_vazio(p))
		printf("Vetor vazio");
	else 
		for(i = 0; i < p->ocupacao; i++)
			printf("%d ", p->v[i]);
	printf("\n");
}

int remov (int * i, struct vetor_magico *p){
	if (esta_vazio(p))
		return 0;
	*i = p->v[--p->ocupacao];
	if(p->ocupacao <= p->tamanho /4)
		if(redimensiona(p->tamanho/2, p))
			return 0;
	return 1;
}

int main() {
  int t;
  struct vetor_magico *apont;
  printf("digite o tamanho do vetor\n");
  scanf("%d", &t);
  apont = cria_vetor(t);
  if (!apont)
  	printf("Falha na alocacao da estrutura\n");
  else  {
    printf("Sucesso\n");
    //insere(2, apont);
    for (t = 1; t <= 42; t++){
		if(insere(t, apont))
			exibe_vetor(apont);
		else
			printf("Falha na Alocação");
	}
	while(remov(&t, apont)){
		printf("\n%d foi removido", t);
		exibe_vetor(apont);
	}
    
    apont = libera(apont);
  }

  return 0;
}
