#include <stdio.h>
#include <math.h>
int main(){
  int x;
  printf("Digite um valor inteiro: ");
  scanf("%d",&x);
  printf("quadrado: %.1f\n", pow(x,2));
  return 0;
}