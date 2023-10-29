#include<stdio.h>

int main(){
  float x;
  scanf("%f", &x);

  float y = (x+5) / (2*(x+1));
  float z = ((y*y) + x*(x-2*y)) / (x*y);
  printf("%f", z);
  return 0;
}
