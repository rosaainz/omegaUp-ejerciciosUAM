#include<stdio.h>

float tiempoAtraparLola(float v, float e, float d){
  float t = (e*d)/(v-e);
  return t*(-1);
}


int main(){
  float v,e,d;
  scanf("%f%f%f", &v, &e, &d);

  printf("%.4f", tiempoAtraparLola(v, e, d));
  return 0;
}
