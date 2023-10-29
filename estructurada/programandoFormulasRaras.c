#include<stdio.h>
#include<math.h>


int main(){
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);

  float num = x + x * (y + z*z);
  float den = (x + 3.1416) * (y + 3.1416);
  printf("%f", num/den);
}
