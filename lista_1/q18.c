#include <stdio.h>
#include <math.h>
int main(){
  float r, d, c, a;
  printf("Digite o raio da circunferência: ");
  scanf("%f", &r);
  d = 2*r;
  c = d*3.14159;
  a = pow(r,2)*3.14159;
  printf("Diâmetro: %f\nCircunferência: %f\nÁrea da circunferência: %f\n", d, c, a);
  return 0;
}