#include<stdio.h>

int main(){
  int n;

  int suma=0;
  while(n != 0){
    scanf("%d", &n);
    suma += n;
  }

  printf("%d", suma);
  return 0;
}
