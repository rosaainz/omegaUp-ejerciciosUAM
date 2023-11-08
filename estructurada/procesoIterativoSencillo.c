#include<stdio.h>

int main(){
  int n;

  scanf("%d", &n);

  while( n<100){
    if(n%2 == 0){
      n += 3;
    }else{
      n *= 2;
    }
  }
  printf("%d", n);
  return 0;
}
