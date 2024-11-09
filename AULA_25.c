/*Protótipo de função - o que seria isso?

  É uma declaração de função sem o corpo, colocada antes da função main() em um 
  programa C. Ele assegura que as chamadas para uma função sejam feitas com os 
  argumentos corretos.

//Pontos Importantes:

  -Muitos compiladores C não verificam se os parâmetros correspondem corretamente.

  -A ausência de argumentos pode resultar em comportamento inesperado.

  -Um protótipo de função faz com que o compilador sinalize um erro se os argumentos     estiverem ausentes.

//Vantagens:

  1. Facilita a navegação em um programa com main() no topo
  2. Auxilia na depuração (debugging).
  3. É comumente utilizado em arquivos de cabeçalho (header files).
*/

#include <stdio.h>

void hello(char[], int); //Protótipo de Função

int main(){
  
  char name[] = "Bro";
  int age = 20;

  hello(name, age);
  
  
  return 0;
}
//Definição da função

void hello(char name [], int age)
{
  printf("\nHello %s, you are %d years old.", name, age);
}
