#include<stdio.h>

int main(){

  int c;
  scanf("%d", &c);

  int f = (c * (9/5)) + 32;
  int k = c+273;
  int r = c*(4/5);
  printf("%d %d %d", k, f,r);
  return 0;
 }
