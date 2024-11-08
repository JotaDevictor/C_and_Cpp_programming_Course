#include <stdio.h>
#include <stdbool.h>

int main(){
  bool sunny = false;

  if(!sunny){     // Reverte a condição sunny para true.
    printf("\nEstá ensolarado lá fora!");  
  }
  else{
    printf("\nEstá chuvoso lá fora!");
  }
  return 0;    
}
