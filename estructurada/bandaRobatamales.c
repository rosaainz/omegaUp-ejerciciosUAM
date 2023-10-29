#include<stdio.h>

int main(){
  int t,b;

  scanf("%d%d", &t, &b);

  int lider = t/2 + (t%2);
  int banda = t - lider;
  int resto = banda % (b-1);
  printf("%d", lider+resto);
}
