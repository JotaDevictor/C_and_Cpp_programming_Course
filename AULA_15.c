#include <stdio.h>

int main(){
  char grade;
  printf("Digite sua nota de letra: ");
  scanf("%c",&grade);

  switch(grade){
    case 'A':
      printf("Nota PERFEITA!!");
      break;
    case 'B':
      printf("Você fez bem!");
      break;
    case 'C':
      printf("Você foi Ok!");
      break;
    case 'D':
      printf("Pelo menos não foi F");
      break;
    case 'F':
      printf("Você FALHOU!!!");
      break;
    default:
      printf("ERRO! Nota incorreta");
      break;
  }
  return 0;
}
