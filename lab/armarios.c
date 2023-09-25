#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SAIR 3
#define MASK 1
#define TAM 8
//0 está livre e 1 esta ocupado
int main() {
  //entrada
  srand(time(NULL)); //sempre vai dar um numero aleatório diferente
  unsigned char ctrl = 0b00000000;
  int fim = 0;
  
  while(1){  
    int x = 0;
    puts("O que você deseja fazer:\n1.Ocupar armário\n2.Liberar armário\n3.Sair");
    scanf("%d", &x);
    //Processamento de Dados (1)
    if(x==1){
      if(ctrl==255){
        puts("\n======================================\nTodos os armários estão ocupados!\n======================================");
      }else{
        while(1){
          int i = rand() % TAM;
          unsigned char n = ctrl|(MASK<<i);
          if(ctrl == n){
            continue;
          }else{
            ctrl = n;
            break;
          }
        }  
      }
    //Processamento de Dados(2)
    }else if (x == 2){
      int i;
      puts("Qual armário você deseja desocupar:");
      scanf("%d", &i);
      ctrl &= ~(MASK<<(i-1));
    }else if(x == 3){
      break;
    }else puts("Operação inválida!\n");
  
    //saida(1)
    puts("\nArmários Ocupados:"); 
    unsigned char ocupados = ctrl; 
    for(int i=0; i<TAM; i++){
      int o = (ocupados >> i)&MASK;
      if(o) printf("%d\n", i+1);
    }
    //saida(2) 
    puts("Armários Livres:");
    unsigned char livres = ~ctrl; //troca o 0 por 1, logo 1 é livre e 0 é ocupado
    for(int i=0; i<TAM; i++){
      int l = (livres>>i)&MASK;
      if(l) printf("%d\n", i+1);
    }
    puts("======================================");
  }
  
  puts("\nFIM DO PROGRAMA!");
  puts("======================================");
  return 0;
}
 

