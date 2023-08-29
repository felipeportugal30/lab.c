#include <stdio.h>
int main(){
  int a = 0, b = 0, voto, v, d;
  printf("vote 10 para o candidato 'A' e 20 para o 'B' e zero para encerrar\n");
  while(1){
    printf("Insira seu voto: ");
    scanf("%d", &voto);
    if(voto == 0){
      break;
    }else if(voto == 10){
      a++;
    }else if(voto == 20){
      b++;
    }
  }
  if(a==b){
    printf("Houve um empate entre os dois candidatos!\n");
  }else if(a>b){
    printf("O candidato 'A' venceu com %d votos, %d a mais que o candidato 'B'\n", a, a-b);
  }else{
    printf("O candidato 'B' venceu com %d votos, %d a mais que o candidato 'A'\n", b, b-a); 
  }
  return 0;}