#include <stdio.h>
#include <math.h>

 /* achar as raizes da equação de segundo grau*/
 
 int main(void) {
  float a, b, c, x1, x2, delta;
  printf("Entre com os valores a, b e c: ");
  scanf("%f%f%f", &a, &b, &c);
  delta = b * b - 4 * a * c;
  if(delta>0)
  {
    x1= (-b + sqrt(delta)) / (2 * a);
    x2= (-b - sqrt(delta)) / (2 * a);
    printf("as raízes sao: %f e %f", x1,x2);
  }
    if(delta==0)
  {
    x1= -b / (2 * a);
    x2= -b / (2 * a);
    printf("existe apenas 1 raiz e e:%f ", x1);
  }
  if(delta<0)
  {
   printf("nao ha raizes reais");
  }
  return 0;
 }
