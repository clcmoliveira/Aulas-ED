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

//Método de Busca Binária
int busca_binaria(int x, int v[], int n){
	int ini = 0, fim = n-1, meio;
	while (ini <= fim){
		meio = (ini + fim) / 2;
		if(x == v[meio])
			return meio;
		if(x < v[meio])
			return meio + 1;
		else
			fim = meio - 1;
	}
	return -1;
}