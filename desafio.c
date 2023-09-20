#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SAIR 3
#define MASK 1
#define TAM 8
int main() {
  //entrada
  srand(time(NULL)); //sempre vai dar um numero aleatório diferente
  unsigned char ctrl = 0;
  int fim = 0;
  
  while(fim!=SAIR){  
    int x = 0;
    puts("O que você deseja fazer:\n1.Ocupar armário\n2.Liberar armário\n3.Sair");
    scanf("%d", &x);
  
    
    switch(x){
      //processamento de dados (1)
      case 1:
        if(ctrl==255){ //11111111 = 255 todos os armario ocupados
          puts("Todos os armários estão ocupados!");
        }else{
          int i = rand() % TAM; //numero aleatório de 0 a 7
          while(1){
            unsigned char teste = (ctrl|(MASK<<i));
            if(ctrl == teste){
              break;             
            }else{
              ctrl = (MASK<<i)^ctrl;
              break;
            }
          }            
        }
        break;
      
      // processamento de dados (2)
      case 2: 
        int arm;
        puts("Qual armário você deseja desocupar: ");
        scanf("%d", &arm);
        unsigned char c; = MASK<<(arm-1);
        ctrl = ctrl & ~c;
        break;
    } 
    
    //saida de dados
    puts("Armários ocupados:");
    for(int a=0; a<TAM; a++){
      unsigned char ocupados = ctrl;
      int t = (ocupados >> a) & MASK;
      if(t) printf("Armário: %d\n", a+1);
    }
    puts("");
    fim = x;
  }
  puts("FIM DO PROGRAMA!");
  return 0;
}
 



