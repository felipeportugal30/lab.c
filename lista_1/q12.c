#include <stdio.h>
int main(){
  int x, y, som, sub, prod, resto;
  float div;
  printf("Digite dois numeros:\n");
  scanf("%d%d", &x, &y);
  som = x+y;
  sub = x-y;
  prod = x*y;
  div = x/y;
  resto = x%y;
  printf("soma: %d\nsubtração: %d\nmultiplicação: %d\n", som, sub, prod);
  printf("divisão: %.2f\nresto: %d\n", div, resto);
  return 0;
}