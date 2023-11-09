#include<stdio.h>

int esPrimo(int n){
  if(n<=1) //no es primo
    return 0;
  for(int i=2; i<n; i++){
    if(n%i==0) //no es primo
      return 0;
  }
  return 1;
}


int main(){
  int k;
  scanf("%d", &k);

  int primos = 0;
  for(int i=0; ;i++){
      primos += esPrimo(i);
      if(primos == k){
        printf("%d", i);
        break;
      }
  }


  return 0;
}
