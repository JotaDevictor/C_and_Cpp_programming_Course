#include <stdio.h>
#include <math.h>

int main(){
  
  const double PI = 3.14159;
  double area, radius, circumference;

  
  printf("Digite o Raio do Círculo: ");
  scanf("%lf", &radius);

  circumference = PI * 2 * radius;        //C=2πr
  area = PI * radius * radius;            //A=πr^2
  
  printf("\nCircunferência: %0.2lf", circumference);
  printf("\nÁrea do círculo: %0.2lf", area);

  return 0;
}
