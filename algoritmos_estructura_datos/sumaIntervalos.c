#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int arr[100000];
  for(int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }

  int m; //intervalos que nos daran
  scanf("%d", &m);

  for(int i=0; i<m; ++i){
    int ini,fin;
    scanf("%d%d", &ini,  &fin);

    int res=0;
    for(int i=ini; i<=fin; ++i){
      res+=arr[i];
    }
    printf("%d\n", res);
  }
}
