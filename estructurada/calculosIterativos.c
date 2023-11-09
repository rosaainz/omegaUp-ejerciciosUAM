#include<stdio.h>

int main(){
  int a,b,c;

  scanf("%d%d%d", &a, &b, &c);

  int n=0;
  for(int i=1; i<= a; i+=2){
    n += i;
  }
  for(int i=1; i<= b; i*=2){
    n -= i;
  }
  while(n%c==0){
    n/=c;
  }

  printf("%d", n);

  return 0;
}
