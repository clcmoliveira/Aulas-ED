#include<stdio.h>
#include<stdio.h>

struct no{
	int info;
	struct no * prox;
};

typedef struct no No;

No * cria_no(int);
int libera_no(No**);
