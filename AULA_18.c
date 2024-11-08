#include <stdio.h>
#include <stdbool.h>

int main(){
  float temp = 25;
  bool sunny = true;
  
  if (temp >= 0 && temp <= 30 && sunny){
    printf("\nO clima está bom!");
  }
  else{
    printf("\nO clima está pessimo!");
  }
  return 0;  
}
