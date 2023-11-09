#include<stdio.h>

int sumatoria(int a, int b){
  int suma=0;
  for(int i=a; i<= b; i++){
    suma+=i;
  }
  return suma;
}


int main(){
  int x, y;

  scanf("%d%d", &x, &y);
  int m = sumatoria(1,x);
  int n = sumatoria(1,y);
  int r = sumatoria(m, n);

  printf("%d\n",r);

  return 0;
}
