#include<stdio.h>
#include<stack>
 
int main(){
  int n, i, j, temp;
  char l[2000];
  char e[1000], s[1000];
  std::stack<char> p;
 
  temp = scanf("%d", &n);
  while(temp && n){
    for (i = 0; i < n; i++)
      scanf(" %c", &e[i]);
    for (i = 0; i < n; i++)
      scanf(" %c", &s[i]);
    e[n] = s[n] = '\0';
    i = j = 0;
    while(1){
      if(!p.empty() && j < n && p.top() == s[j]){
        p.pop();
        printf("R");
        j++;
      }else if(i < n){
        p.push(e[i]);
        printf("I");
        i++;
      }else break;
    }
 
    if(p.empty()) printf("\n");
    else  printf(" Impossible\n");
    while (!p.empty()){
      p.pop();
    }
  }
  return 0;
}

