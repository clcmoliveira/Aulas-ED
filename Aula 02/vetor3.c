#include <stdio.h>
#include <stdlib.h>

int main(){
  int *v;
  int t;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &t);
  
  v = (int *) malloc (t * sizeof(int));
  return 0;
}
