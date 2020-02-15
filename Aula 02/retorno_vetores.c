#include <stdio.h>
#include <stdlib.h>

int * cria_vetor(int t){
  int v[t], i;
  for (i = 0; i < t; i++){
    v[i] = 2 * i;
   }
   return v;
}

int main(){
  int * x = cria_vetor(10);
  return 0;
}
