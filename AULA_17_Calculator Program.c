#include <stdio.h>

int main(){
  char operador;
  double num1, num2, r;
  
  printf("-Escolha a Operação: [ + - * / ] ");
  scanf("%c", &operador);
  
  printf("Digite um número: ");
  scanf("%lf", &num1);
  printf("Digite outro número: ");
  scanf("%lf", &num2);
  
  switch(operador){
    case '+':
      r = num1 + num2;
      printf("Resultado da soma: %.0lf", r);
      break;
    case '-':
      r = num1 - num2;
      printf("Resultado da subtração: %.1lf", r);
      break;
    case '*':
      r = num1 * num2;
      printf("Resultado da multiplicação: %.1lf", r);
      break;
    case '/':
      r = num1 / num2;
      printf("Resultado da divisão: %.1lf", r);
      break;    
    default:
      printf("%c É um operador incorreto!", operador);
  }
  return 0;
}
