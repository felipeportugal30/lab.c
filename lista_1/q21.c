#include <stdio.h>
int main(){
  int p, s;
  printf("Digite 2 números e descubra se são múltiplos: ");
  scanf("%d %d", &p, &s);
  int x = p % s == 0;
  printf("%d %s múltiplo de %d\n",p, x ? "é" : "não é", s);

  return 0;
}