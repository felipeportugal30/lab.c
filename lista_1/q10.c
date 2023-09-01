#include <stdio.h>
int main(){
  float h, c, l, v;
  
  printf("Digite o valor da altura: ");
  scanf("%f",&h);
  
  printf("Digite o valor do comprimento: ");
  scanf("%f",&c);
  
  printf("Digite o valor da largura: ");
  scanf("%f",&l);
  
  v = l*h*c;
  printf("O volume da caixa retangular é de %.3f", v);
  
  return 0;
}