#include <stdio.h>

int main() {
    int n, x;
    unsigned long long resultado = 1; 

    printf("Escreva um valor para 'x': ");
    scanf("%d", &x);

    printf("Escreva um valor para 'n': ");
    scanf("%d", &n);

    if (n >= 0) {
        resultado = (1ULL << n) * x;
        printf("2^%d * %d = %llu\n", n, x, resultado);
    } else {
        printf("2^%d não está definido para valores negativos de n.\n", n);
    }

    return 0;
}
