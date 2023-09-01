#include <stdio.h>
int main(){
  int x, c, d, u;
  printf("Digite um número: ");
  scanf("%d", &x);
  c = x/100;
  d = (x - (c*100)) / 10;
  u = (x - (c*100 + d*10));
  printf("O número invertido é %d%d%d\n", u,d,c);
 
  return 0;
}