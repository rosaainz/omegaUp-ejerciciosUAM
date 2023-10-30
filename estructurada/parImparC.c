#include<stdio.h>

int main(){
  int numero;

  scanf("%d", &numero);
  printf("%s", numero%2==0 ? "par" : "impar");
}
