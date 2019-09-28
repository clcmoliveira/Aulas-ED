#include<stdio.h>
#include<stdlib.h>

typedef struct no{
	int info;
	struct no *esq, *dir;
} No;

typedef No * pont_no;

No * cria_no(int);
int libera_no(pont_no *);

pont_no libera(pont_no);

