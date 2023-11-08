#include<stdio.h>

int main(){
  int n;

  int suma=0;
  do{
    scanf("%d", &n);
    suma += n;
  }while(n != 0);

  printf("%d", suma);
  return 0;
}
