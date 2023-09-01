#include <stdio.h>
int main(){
  float real, dolar, cotacao;
  printf("Qual a cotação atual do dolar?\n");
  scanf("%f", &cotacao);
  printf("Qual o valor em real?\n");
  scanf("%f", &real);
  dolar = real*cotacao
  printf("O valor em dolar é %.2f\n", dolar);
  return 0;
}