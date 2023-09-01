#include <stdio.h>
#include <math.h>
int main() {
  int x;
  printf("Digite um valor inteiro para x:\n");
  scanf("%d", &x);
  printf("triplo: %d\n", x*3);
  printf("metade: %d\n", x/2);
  printf("quadrado: %.1f\n", pow(x,2));
   
  return 0;
}