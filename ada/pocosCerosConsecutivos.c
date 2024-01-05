#include<stdio.h>

int cadenasPosibles(int longCadena){
  if (longCadena == 0){
    return 1;
  }else if (longCadena == 1){
    return 2;
  }else if (longCadena == 2){
    return 4;
  }else{
    return cadenasPosibles(longCadena-1) + cadenasPosibles(longCadena-2) + cadenasPosibles(longCadena-3);
  }
}


int main(){
  int n;
  scanf("%d", &n);
  printf("%d", cadenasPosibles(n));
  return 0;
}
