#include "vetor.c"

int main(){
	int i, j, t;
	struct meu_vetor *apont;
	printf("Selecione a opção:");
	scanf("%d", &i);
	switch(i){
		case 1: 
			printf("digite o tamanho do vetor\n");
			scanf("%d", &t);
			mostra_maior_menor(t, apont);
		break;
		case 2: 
			printf("Informe o valor de i e j: ");
			scanf("%d", &i); 
			scanf("%d", &j);
			int result = maior(&i, &j);
			printf("Maior de i e j e: ", result);
		break;
		case 3:
			printf("Informe o valor de i e j: ");
			scanf("%d", &i); 
			scanf("%d", &j);
			troca(&i, &j);
			printf("Trocou: %d, %d", i, j);
		break;
		case 4:
			printf("digite o tamanho do vetor\n");
			scanf("%d", &t);
			vetor_tamanho_n(t, apont);
		break;
		case 5:
			printf("digite o tamanho do vetor\n");
			scanf("%d", %t);
			cria_vetor(t);
			primeiro_elemento(apont);
		break;
		case 6:
			printf("digite o tamanho do vetor\n");
			scanf("%d", %t);
			cria_vetor(t);
			quantidade(apont);
		break;
		case 7:
		break;
		default: break;
	}
}
