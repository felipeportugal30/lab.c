#include <stdio.h>
int main(){
  float high;
  char sexo;
  printf("Digite a sua altura:\n");
  scanf("%f", &high);
  printf("Digite o seu sexo (M ou F):\n");
  scanf("%c", &sexo);
  if(sexo = 'M'){
    printf("O seu peso ideal é %.2f", (72.7*high)-58);
  }else{
    printf("O seu peso ideal é %.2f", (62.1*high)-44.7);
  }
}