#include <stdio.h>
int main(){
  int dias;
  float SalarioLiquido;
  printf("Digite o número de dias que o usuário trabalhou: ");
    scanf("%d", &dias);
  if(dias <= 10){
    SalarioLiquido = (dias*50.25)*0.9;
  }else if (dias>10 || dias <=20){
    SalarioLiquido = ((dias*50.25)*1.2)*0.9;
  }else{
    SalarioLiquido = ((dias*50.25)*1.3)*0.9;
  }
  printf("O salário liquido desse funcionário é %.2f\n", SalarioLiquido);
  
  return 0;
}