#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int prefijo[100000], acum=0;
  for(int i=0; i<n; ++i){
    int actual;
    scanf("%d", &actual);
    acum += actual;
    prefijo[i] = acum;
  }

  int m;
  scanf("%d", &m);

  for(int i=0; i<m; ++i){
    int ini, fin;
    scanf("%d%d", &ini, &fin);

    printf("%d\n", prefijo[fin] - (ini == 0 ? 0 : prefijo[ini-1]));
  }
}
