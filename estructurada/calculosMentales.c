#include<stdio.h>
#include<math.h>

int main(){
  float r;
  scanf("%f", &r);

  float pot = pow((r+5), 2);
  float tercio = (1/3.0)*r;
  float tres = pot/tercio;
  printf("%f %f %f %f %f", r, r+5, pow((r+5), 2), tres , pow(tres, 3.0) );

  return 0;
}
