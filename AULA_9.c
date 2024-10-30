#include <stdio.h>

int main(void) {
    /* Augmented assignment operators -> Usado para substituir a instrução onde um operador 
                                         toma uma variável como um de seus argumentos e então 
                                         atribui o resultado de volta à mesma variável.
                                      
                                                  x = x + 1;    -->     x += 1; 
    */

  int x = 10;

  //x = x + 2;          
    x += 2;

  //x = x - 3;
  //x -= 3;

  //x = x * 4;
  //x *= 4;

  //x = x / 5;
  //x /= 5;
  
  //x = x % 2;
  //x %= 2;
  
  printf("%d", x);
  
  return 0;
}
