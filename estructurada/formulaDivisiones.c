#include<stdio.h>
#include<math.h>

int main(){
  float x,y;
  scanf("%f%f", &x, &y);

  float term1 = ((x*x*x) + (x*x))/((y*y)-y);
  float term2 = (x/y)+5;
  float num = term1 - term2;
  float den = 2*x;
  printf("%f", num/den);
  return 0;
}
