#include <stdio.h>
int main(){
  int a, b, t;
  printf("Digite os valores de A e de B:\n");
  scanf("%d%d", &a, &b);
  t = a;
  a = b;
  b = t;
  printf("A = %d || B = %d\n", a, b);
  return 0;
}