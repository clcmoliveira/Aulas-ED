#include<stdio.h>
#include<stdlib.h>


//Método de Busca Simples
int busca_simples(int x, int v[], int n){
	int i;
	for (i = 0; i < n; i++){
		if(x == v[i])
			return i;
	}
	return -1;
}