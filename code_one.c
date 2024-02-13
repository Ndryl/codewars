#include <stdio.h>
#include <string.h>

void output(char *a){
  int cont = 0;
  char buffer[100];
  char *token = strtok(a, " ");
  while(token != NULL){
    if(strlen(token) < 5){
      for(int i = 0; i < strlen(token); i++){
        buffer[cont] = token[i];
        cont++;
      }
    }
    else{
      for(int i = strlen(token) - 1; i >= 0; i--){
        buffer[cont] = token[i];
        cont++;
      }
    }
    buffer[cont] = ' ';
    cont++;
    token = strtok(NULL, " ");
  }
  buffer[cont] = '\0';
  puts(buffer);

}


int main(void){
  char text[100];
  fgets(text, 100, stdin);
  output(text);


  return 0;
}
