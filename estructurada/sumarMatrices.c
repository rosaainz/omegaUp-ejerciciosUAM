#include<stdio.h>

int main(){
  int a,b;
  scanf("%d%d", &a, &b);

  int matriz[a][b];
  for(int i=0; i<a; ++i){
    for(int j=0; j<b; ++j){
      scanf("%d", &matriz[i][j]);
    }
  }


  for(int i=0; i<a; ++i){
    for(int j=0; j<b; ++j){
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
