#include<stdio.h>

int potencia_iterativa(int a, int b){
  int res = 1;
  for(int i=0; i<b; ++i){
    res *= a;
  }
  return res;
}

int potencia_recursiva1(int a, int b){
  if(b == 0){
    return 1;
  }else if(b == 1){
    return a;
  }else{
    return potencia_recursiva1(a, b-1) * a;
  }
}



int main(){
  for(int i=0; i<= 20; ++i){
    printf("2^%d =  %d, %d\n",i,
        potencia_iterativa(2, i),
        potencia_recursiva1(2, i));
  }

  return 0;
}
