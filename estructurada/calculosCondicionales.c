#include<stdio.h>

int main(){
  int n;

  scanf("%d", &n);

  int m = 0;
  if( n%2 == 0){
    n /= 2;
    m += 1;
  }else{
    n += 1;
    m += 1;
  }

  if(n >= 100){ //mayor a tres cifras
    n /= 100;
    m += 1;
  }else if (n >= 10){
    n /= 10;
    m += 1;
  }

  if( n%3 == 0){
    n -= 1;
    m += 1;
  }

  printf("%d %d",n,m);

  return 0;
}
