#include<stdio.h>

int main(){
  int c, p, h;

  scanf("%d%d%d", &c,&p,&h);

  int fam = (c - p) - (h+1);
  int resto = (c-p)%(h+1);
  int donPancho = p + (resto);

  printf("%d", donPancho);
}
