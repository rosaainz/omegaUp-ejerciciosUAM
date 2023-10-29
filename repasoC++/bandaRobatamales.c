#include<stdio.h>

int main(){
  int t,b;

  scanf("%d%d", &t, &b);

  int lider = t/2;

  if( t%2 == 1){
    lider += 1;
  }

  int banda = t/2;
  if( banda %2== 1 ){
    lider += 1;
  }
  printf("%d", lider);
}
