#include<stdio.h>

int potencia_iterativa(int a, int b){
  int res = 1;
  for(int i=0; i<b; ++i){
    res *= a;
  }
  return res;
}



int main(){
  for(int i=0; i<= 20; ++i){
    printf("%d\n",
        potencia_iterativa(2, i));
  }

  return 0;
}
