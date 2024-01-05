#include<stdio.h>

int cadenasPosibles(int longCadena, int cerosAtras){
  if(longCadena == 0){
    return 1;
  }else
    return 0;
}



int main(){
  int n;
  scanf("%d", &n);
  printf("%d", cadenasPosibles(n, 0));
  return 0;
}
