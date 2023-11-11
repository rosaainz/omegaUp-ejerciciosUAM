#include<stdio.h>

int main(){
  int m;
  scanf("%d", &m);

  for(int i=0; i<m; i++){ //casos
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for(int i=0; i<n; ++i){
      for(int j=0; j<n; ++j){
        scanf("%d", &mat[i][j]);
      }
    }


    int res=1;
    for(int i=0; i<n; ++i){
       for(int j=0; j<n; ++j){
          if(mat[i][j] != mat[j][i] ){
          res = 0;
          break;
           }
       }
     }
  printf(res == 1 ? "Simétrica\n" : "No Simétrica");
  }
  return 0;
}
