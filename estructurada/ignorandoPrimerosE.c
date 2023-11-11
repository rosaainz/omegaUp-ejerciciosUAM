#include<stdio.h>

void llenaArreglo(int n, int arr[]){
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }
}

void imprimeArreglo(int n, int arr[]){
  for(int i=0; i<n; i++){
    printf("%d", arr[i]);
  }
}

int main(){
  int n=0, k;
  scanf("%d", &n);

  int arr[] = {};
  llenaArreglo(n, arr);
  imprimeArreglo(n, arr);

  return 0;
}
