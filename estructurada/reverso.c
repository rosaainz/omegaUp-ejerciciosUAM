#include<stdio.h>

void llenaArreglo(int n, int arr[]){
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
}

void imprimeArreglo(int n, int arr[]){
  for(int i=n-1; i >= 0; --i){
    printf("%d", arr[i]);
  }
}

int main(){
  int n;
  scanf("%d", &n);

  int arr[n];
  llenaArreglo(n, arr);

  imprimeArreglo(n, arr);


  return 0;
}
