#include <stdio.h>
int main(){
  int x;
  printf("Digite um valor inteiro: ");
  scanf("%d",&x);
  printf("O antecessor é %d e o sucessor é %d\n", x-1, x+1);
  return 0;
}