#include<stdio.h>

int main(){
  int a,b;
  int contador = 0;
  scanf("%d%d", &a, &b);

  contador += (a == 7);
  contador += (b == 7);

  printf("%d", contador);
  return 0;
}
