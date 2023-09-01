#include <stdio.h>
#include <math.h>

int main(){
  float x, y, z, ma, mg;
  printf("Digite três números quaisquer: ");
  scanf("%f%f%f", &x, &y, &z);
  ma = (x+y+z)/3;
  mg = pow(x*y*z, 1.0/3.0);

  printf("Média Aritmética: %f\nMédia Geométrica: %f\n", ma, mg);

  return 0;
}