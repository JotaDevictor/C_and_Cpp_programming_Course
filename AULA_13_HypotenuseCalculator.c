#include <stdio.h>
#include <math.h>

int main() {
  
  double A, B, C;

  printf("-Lado A: ");
  scanf("%lf", &A);
  
  printf("-Lado B: ");
  scanf("%lf", &B);

  C = sqrt((A * A) + (B * B));

  printf("\nHipotenusa: %0.2lf", C);

  return 0;
}
