//matriz de float pseudo aleatoria e diga qual o maior valor da diagonal principal
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 3
#define QTD 10
int main(){
    //entrada
    float matriz[N][N];
    srand(time(NULL));
    
    //processamento de dados
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            matriz[i][j] = (float) (rand()/RAND_MAX)*QTD;
        }
    }

    //saida de dados (matriz)
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            printf("%.2f\t", matriz[j][i]);
        }
        puts("");
    }
    //saida de dados (maior)
    float maior = matriz[0][0];
    for(int i=0; i<QTD; i++){
        if(maior<matriz[i][i]) maior = matriz[i][i];
    }
    printf("O maior numero da diagonal principal é %.2f", maior);
}
