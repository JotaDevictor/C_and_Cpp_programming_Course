#include <stdio.h>

int findMax(int x, int y)
{
  return (x > y) ? x : y; //Formula -> (condição) ? value se for true : value se for false
}

int main() {

  int max = findMax(5, 4);
  printf("%d", max);
  
  return 0;
}
