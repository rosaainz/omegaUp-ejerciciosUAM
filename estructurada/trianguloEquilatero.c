#include<stdio.h>

int main(){
  int p1,p2,p3,p4;

  scanf("%d%d%d%d", &p1, &p2, &p3, &p4);
  int c1 = (p2 == p3 && p3 == p4);
  int c2 = (p1 == p3 && p3 == p4);
  int c3 = (p1 == p2 && p2 == p4);
  int c4 = (p1 == p2 && p2 == p3);

  printf("%d", c1 || c2 || c3 || c4);

  return 0;
}
