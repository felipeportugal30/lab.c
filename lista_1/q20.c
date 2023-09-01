#include <stdio.h>
int main() {
  int x;
  puts("Digite um número e descubra se ele é par ou ímpar: ");
  scanf("%d", &x);
  int par;
  //operador ternario: variavel -> condição ? verdadeiro : falso
  par = x % 2 == 0;
  printf("%d é %s\n", x, par ? "par" : "ímpar");
  
  return 0;
}
