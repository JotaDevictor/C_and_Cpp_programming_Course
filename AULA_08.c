#include <stdio.h>

int main(){
  
  int x = 10; 
  int y = 4;
  
  int soma = x + y;
  int sub  = x - y;
  int mult = x * y;
  float div = x / (float) y; //(float) y para resultar em 2.5
  int mod = x % y;
  x++;
  y--;
  
  printf("%d\n", soma);
  printf("%d\n", sub);
  printf("%d\n", mult);
  printf("%0.1f\n", div);
  printf("%d\n", mod);
  printf("%d\n", x);
  printf("%d\n", y);

  return 0;
}
