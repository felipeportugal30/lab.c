#include <stdio.h>
int main(){
  int x;
  printf("Digite um valor e descubra em hexa e octadecimal: ");
  scanf("%d", &x);
  printf("Hexadecimal: %hx\nOctadecimal: %o\n", x, x);
}