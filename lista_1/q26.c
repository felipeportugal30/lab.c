#include <stdio.h>
#include <math.h>

int main(){
    float x, a, b, y, d;
 
    printf("Digite os pontos x e y da primeira coordenada:\n");
    scanf("%f%f", &x, &y);
  
    printf("Digite os pontos x e y da segunda coordenada:\n");
    scanf("%f%f", &a, &b);

    d = sqrt(pow(a - x, 2) + pow(b - y, 2));
 
    printf("A distância entre os dois pontos é igual a %f\n", d);
  
  return 0;
}