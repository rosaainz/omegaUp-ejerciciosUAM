#include<stdio.h>

int main(){
  int n, res=1;
  scanf("%d", &n);

  int mat[n][n];
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      scanf("%d", &mat[i][j]);
    }
  }

  int diag1=0, diag2;
  for(int i=0; i<n; ++i){
    diag1 += mat[i][i];
    diag2 += mat[i][n-i-1];
  }

  if(diag1 != diag2){
    res = 0;
  }else{
    for(int i=0; i<n; ++i){
      int sumafila=0, sumacol=0;
      for(int j=0; j<n; ++j){
        sumafila += mat[i][j];
        sumacol += mat[j][i];
      }
      if(sumafila != diag1 || sumacol != diag1 ){
        res = 0;
        break;
      }
    }
  }

  printf("%d", res);

  return 0;
}
