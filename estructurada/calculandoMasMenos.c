#include<stdio.h>

int main(){
  int a,b,c;

  scanf("%d%d%d", &a, &b, &c);

  if(b == 0){
    printf("indefinido");
  }else{
    double pos = ((double)a/b)+c;
    double neg = ((double)a/b)-c;
    if(pos == 0 || pos == neg){
      printf("%f", neg);
    }else if(neg == 0 || pos == neg){
      printf("%f", pos);
    }else{
      printf("%f%f", pos, neg);
    }
  }
  return 0;
}
