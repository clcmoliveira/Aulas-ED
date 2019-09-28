#include "arvore.h"

int main(){
	/*
	pont_no p1 = cria_no(10);
	pont_no p2 = cria_no(20);
	
	printf("P1 = %d\n", &p1->info);
	printf("P2 = %d\n", &p2->info);
	
	printf("\np2 antes = %p", p2);
	libera_no(&p2);
	printf("\np2 depois = %p", p2);
	
	
	printf("\np1 antes = %p", p1);
	p1 = libera(p1);
	printf("\np1 depois = %p", p1);
	*/
	Arvore * a = cria_arvore();
	insere(26, a);
	insere(12, a);
	insere(5, a);
	insere(19, a);
	insere(34, a);
	mostra_em_ordem(a);
	
	return 0;
}
/*Para estudar:
	1. Construir uma fun��o para:
		a. Contar o numero de n�s de uma arvore
		b. Contar o n�mero de n�s da franja (n�s sem filho, de grau 0)
		c. Determinar a altura da �rvore 
	2. Pesquisar e implementar o pr�-ordem e o p�s-ordem
*/
