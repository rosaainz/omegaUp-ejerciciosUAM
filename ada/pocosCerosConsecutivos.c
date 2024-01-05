#include<stdio.h>

int cadenasPosibles(int longCadena, int cerosAtras){
  if(longCadena == 0){
    return 1;
  }else if(cerosAtras == 2){
    return cadenasPosibles(longCadena-1, 0);
  }else
    return cadenasPosibles(longCadena-1, 0) + cadenasPosibles(longCadena-1, cerosAtras+1);
}



int main(){
  int n;
  scanf("%d", &n);
  printf("%d", cadenasPosibles(n, 0));
  return 0;
}
