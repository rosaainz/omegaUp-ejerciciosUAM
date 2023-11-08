#include<stdio.h>

int main(){
  int n;

  scanf("%d", &n);

  int suma=0, denominador=1;
  while( denominador <= n){
    suma += n/denominador;
    denominador *= 2;
  }

  printf("%d", suma);
  return 0;
}
