#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int arr[100000];
  for(int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }

  int prefijo[100000];
  prefijo[0] = arr[0];
  for(int i=1; i<n; ++i){
    prefijo[i] = prefijo[i-1] + arr[i];
  }

  int m;
  scanf("%d", &m);

  for(int i=0; i<m; ++i){
    int ini, fin;
    scanf("%d%d", &ini, &fin);

    if(ini == 0){
      printf("%d\n", prefijo[fin]);
    }else{
      printf("%d\n", prefijo[fin] - prefijo[ini-1]);
    }
  }
}
