#include<stdio.h>

int main(){
  int t;

  scanf("%d", &t);

  if(t < 21 ){
    printf("fria!\n");
  }else if(t > 29 ){
    printf("caliente!\n");
  }else{
    printf("tibia\n");
  }

  if( t < 15 || t > 34){
    printf("RIP escamitas :(");
  }

  return 0;
}
