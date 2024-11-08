#include <stdio.h>
#include <ctype.h>

int main(){
  char unit;
  float temp;
  
  printf("Temperatura em C ou F : ");
  scanf("%c", &unit);

  unit = toupper(unit);   //Transforma em Maiúsculo
  
  if (unit == 'C'){
    printf("\nTemp. em Celsius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("Em Fahrenheit a Temp. é: %0.1f", temp);
  }
  else if (unit == 'F'){
    printf("\nTemp. em Fahrenheit: ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("Em Celsius a Temp. é: %0.1f", temp);
  }
  else{
    printf("\nERRO! Unidade Inválida.");
  }
  return 0;
}
