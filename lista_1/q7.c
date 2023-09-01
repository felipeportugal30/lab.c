#include <stdio.h>
int main(){
  int hours, min, sec, total_sec;
  
  printf("Digite a quantidade de horas: ");
  scanf("%d", hours);
  
  printf("Digite a quantidade de minutos: ");
  scanf("%d", min);
  
  printf("Digite a quantidade de segundos: ");
  scanf("%d", sec);
  
  total_sec = (sec) + (min*60) + (hours*3600);

  printf("o total são de %d segundos", total_sec);
  return 0;
}