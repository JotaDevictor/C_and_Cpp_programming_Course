#include <stdio.h>
#include <string.h>  //permite usar strlen()

int main(){
  char name[25];    //bytes
  int age;

  printf("Whats your name? ");
  scanf("%s", &name);           //Não le os espaços.
  fgets(name, 25, stdin);       //Para ler os espaços.
  name[strlen(name)-1] = '\0';  //Elimina o ultimo caracter da string.
 
  printf("How old are you? ");
  scanf("%d", &age);

  printf("\nHello %s how are you?", name);
  printf("\nYou are %d years old", age);

  return 0;
}
