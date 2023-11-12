#include<stdio.h>

int main(){
  int a,b,c;
  scanf("%d%d%d", &a, &b, &c);

  int mat1[a][b], mat2[b][c], mat3[a][c];

  //llenar matriz 1
  for(int i=0; i<a; ++i){
    for(int j=0; j<b; ++j){
      scanf("%d", &mat1[i][j]);
    }
  }

  //llenar matriz 2
  for(int i=0; i<b; ++i){
    for(int j=0; j<c; ++j){
      scanf("%d", &mat2[i][j]);
    }
  }

  //llenar la tercer matriz, con los valores multiplicados
  for(int i=0; i<a; ++i){
    for(int j=0; j<c; ++j){
      int t=0;
      for(int k=0; k<b; ++k){
        t += mat1[i][k] * mat2[k][j];
      }
      mat3[i][j] = t;
      printf("%d", mat3[i][j]);
    }
    printf("\n");
  }


  return 0;
}
