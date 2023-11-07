#include<stdio.h>

int main(){
  int p1,p2,p3,p4;

  scanf("%d%d%d%d", &p1, &p2, &p3, &p4);
  if( (p2 == p3 && p3 == p4 )||
     (p1 == p3 && p3 == p4) ||
    (p1 == p2 && p2 == p4) ||
   (p1 == p2 && p2 == p3) ){
    printf("%d",1); //si se puede
  }else{
    printf("%d", 0); //no se puede
  }
}
