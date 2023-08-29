#include <stdio.h>
int main(){
  int nmr, maior; 
  printf("quando o numero digitado for zero, o código será finalizado\n");

  printf("escreva um número: ");
    scanf("%d", &nmr);
  maior = nmr;
  
  while(1){
    if (nmr == 0){
      break;}
    // função "if" para saber qual o maior número
    if(nmr >= maior){ 
      if(nmr % 2 == 0){
        printf("%d é o maior número e é par\n", nmr);
      }else{
        printf("%d é o maior número e é ímpar\n", nmr);
        }
      maior = nmr;
    }else{
      if(nmr % 2 == 0){
        printf("%d é o maior número e é par\n", maior);
      }else{
        printf("%d é o maior número e é ímpar\n", maior);
        }
    }
    printf("escreva um número: ");
      scanf("%d", &nmr);
  }
return 0;
}