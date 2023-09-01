#include <stdio.h>
int main(){
  float bill, total;
  printf("Digite o valor da conta:\n");
  scanf("%f", &bill);
  total = bill * 1.1;
  printf("O total a ser pago é %.2f\n",total);
  return 0;
}