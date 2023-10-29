#include<stdio.h>

int main(){
  int r,p;

  scanf("%d%d", &r, &p);
  printf("%f", 1/( (1.0/r)-(1.0/p) ));
  return 0;
}
