#include <stdio.h>
int main(){
  float c, f;
  printf("digite o valor da temperatura em celsius: ");
  scanf("%f", &c);
  f = ((9*c)+160)/5;
  printf("Essa temperatura corresponde à %.2f graus Fahrenheit!");
  return 0;
}