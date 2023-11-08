#include<stdio.h>

int main(){
  int t;

  scanf("%d", &t);

  if(t <= 21 && t >= 15){
    printf("fria!");
  }else if(t >= 21 && t <= 29){
    printf("tibia");
  }else if(t >= 29 && t <= 34){
    printf("caliente!");
  }else{
    printf("RIP escamitas :(");
  }

  return 0;
}
