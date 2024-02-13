#include <stdio.h>

int find_odd(int a, int b[a]){
  int cont = 0;
  int comp = 0;
  for(int i = 0; i < a; i++){
    for(int j = 0; j < a; j++){
      if(b[i] == b[j]){
        cont++;
      }
    }
    if(cont % 2 != 0){
      return b[i];
    }
  }
  return 0;
}

int main(void){
  int aux;
  scanf("%d", &aux);
  int array[aux];
  int var = find_odd(aux, array);
  printf("%d", var);
  return 0;
}
