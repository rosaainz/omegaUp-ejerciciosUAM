#include<stdio.h>

void f_ri(int* pa,int* pb, int* pc, int* pd, int* pe ){
  int t = *pa;
  *pa = *pb;
  *pb = *pc;
  *pc = *pd;
  *pd = *pe;
  *pe = t;
}

void f_rd(int* pa,int* pb, int* pc, int* pd, int* pe ){
  f_ri(pe, pd, pc, pb, pa);
}


int main(){
  int rotar_izq, rotar_der;
  scanf("%d%d", &rotar_izq, &rotar_der);

  int a=1, b=2, c=3, d=4, e=5;
  for(int i=0; i<=rotar_izq%5; i++){
    f_ri(&a,&b,&c,&d,&e);
  }

  for(int i=0; i<=rotar_der%5; i++){
    f_rd(&a,&b,&c,&d,&e);
  }

  printf("%d%d%d%d%d", a,b,c,d,e);
  return 0;
}
