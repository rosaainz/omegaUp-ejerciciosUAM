#include<stdio.h>

int main(){
  int a,b;
  int s = scanf("%d%d", &a, &b);

  while(scanf("%d%d", &a, &b) == 2){
    printf("%d", a+b);
  }

  return 0;
}
