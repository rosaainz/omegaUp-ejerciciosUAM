#include<stdio.h>

int main(){
  int a,b,c;

  scanf("%d%d%d", &a, &b, &c);

  if( a == b && b == c){
    printf("I");
  }else if(a <= b && b <=c ){ //creciente débil
    printf("C");
  }else if( a >= b && b >= c ){ //decreciente débil
    printf("D");
  }else{
    printf("X");
  }

  return 0;
}
