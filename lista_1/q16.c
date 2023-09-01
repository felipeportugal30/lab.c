#include <stdio.h>
int main(){
  //vha = valor da hora aula; ht = horas trabalhadas, sl = salario liquido
  float inss, vha, ht, sl, sb;
  printf("Digite o valor da hora aula: ");
  scanf("%f", &vha);
  printf("Digite o número de horas trabalhadas: ");
  scanf("%f", &ht);
  printf("Digite o percentual de desconto do INSS(ex:0.14 = 14%): ");
  scanf("%f", &inss);
  sb = (vha*ht);
  sl = sb - sb*inss;
  printf("O salário bruto é %.2f reais e o salário líquido é %.2f reais\n", sb, sl);
    
  return 0;
}