#include<stdio.h>

int main(){
  float v,e,d;
  scanf("%f%f%f", &v, &e, &d);

  float seg = (e*d)/v;
  printf("%f", seg);

  return 0;
}
