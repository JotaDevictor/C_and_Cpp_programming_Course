#include <stdio.h>

int main() {
  int age;
  
  printf("Digite sua idade: ");
  scanf("%d", &age);

  if (age >= 18){                      //Operador de maior ou igual >=
    printf("Maior de idade");          //Operador de menor ou igual <=
  }
  else if (age > 0){                   //Operador de menor que >
    printf("Menor de idade");          //Operador de maior que <
  }
  else if (age == 0){                   
    printf("Você acabou de nascer!!"); //Operador de igualdade ==
  }
  else{
    printf("Ocorreu um Erro!");  
  }
  
  return 0;
}
