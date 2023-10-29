#include<stdio.h>

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  int tia = n/2;
  int amigos = (n-tia)/m;
  int tu = (n-tia)%m;

  printf("%d", tu);
  return 0;
}
