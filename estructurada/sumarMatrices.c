#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int matriz[n][n];
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      scanf("%d", &matriz[i][j]);
    }
  }

  int matriz1[n][n];
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      scanf("%d", &matriz1[i][j]);
    }
  }


  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      printf("%d", matriz[i][j] + matriz1[i][j]);
    }
    printf("\n");
  }
  return 0;
}
