#include <stdio.h>
int main() {
  int y;
  float f = 20.30;
  double d = 50.60;
  char c = 30;
  long long int li = 1003000000000000;
  printf("Digite um valor: \n");
  scanf("%d", &y);
  puts("=========");
  printf("qtd de bytes de y (int): %d\n", sizeof(y));
  printf("qtd de bytes de f (int): %d\n", sizeof(f));
  printf("qtd de bytes de d (int): %lu\n", sizeof(d));
  printf("qtd de bytes de c (int): %d\n", sizeof(c));
  printf("qtd de bytes de li (int): %lu\n", sizeof(li));
  return 0;
}