#include <stdio.h>
#include <math.h>  //Biblioteca das funções Matemáticas.

int main(){
  double A = sqrt(9);     // Raiz Quadrada.
  double B = pow(2, 4);   // Potencia.
  int C  = round(3.14);   // Arredondar.
  int D = ceil(3.14);     // Arredondar para cima.
  int E = floor(3.99);    // Arredondar para baixo.
  double F = fabs(-100);  // Valor Absoluto.
  double G = log(3);      // Logaritmo.
  double H = sin(45);     // Seno
  double I = cos(45);     // Cosseno
  double J = tan(45);     // Tangente

  printf("\n%0.2lf\n", A);
  printf("\n%0.2lf\n", B);
  printf("\n%d\n", C);
  printf("\n%d\n", D);
  printf("\n%d\n", E);
  printf("\n%0.2lf\n", F);
  printf("\n%lf\n", G);
  printf("\n%lf\n", H);
  printf("\n%lf\n", I);
  printf("\n%lf\n", J);
  
  return 0;
}
