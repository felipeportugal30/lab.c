#include <stdio.h>
int main(){
  int totalsec, h, m, sec;

  printf("Digite o total de segundos: ");
  scanf("%d", &totalsec);
  h = totalsec / 3600; 
  m = (totalsec - (h*3600))/60;
  sec = totalsec - (h*3600 + m*60);
  printf("Horas: %d\nMinutos: %d\nSegundos: %d\n", h, m, sec);

  return 0;
}