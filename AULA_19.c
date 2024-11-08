#include <stdio.h>
#include <stdbool.h>

int main(){
  float temp = 25;
  bool sunny = true;

  if (temp <= 0 || temp >= 30 || sunny == false){
    printf("\nO clima está pessimo!");
  }
  else{
    printf("\nO clima está bom!");
  }
  return 0;  
}
