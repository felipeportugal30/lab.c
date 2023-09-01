#include <stdio.h>
#include <stdlib.h>
int main(){
  int x;
  printf("Digite um valor inteiro e descubra seu módulo: ");
  scanf("%d", &x);
  printf("O módulo de %d é %d\n", x, abs(x)); 
}