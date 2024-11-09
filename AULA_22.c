#include <stdio.h>

void birthday(char n[], int i)
{
  printf("\nHappy birthday dear %s!", n);
  printf("\nYou are %d years old!", i);
}

int main(){
  
  char name[] = "João";
  int age = 21;
  birthday(name, age);
  
  return 0;
}
