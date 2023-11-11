#include<stdio.h>

void intercambia(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}


void ordena(int n, int arr[]){
  for(int i=0; i<n-1; ++i){
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        intercambia(&arr[j], &arr[j+1]);
      }
    }
  }
}


int main(){
  int n;
  scanf("%d", &n);

  int arr[n];
  for(int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }



  ordena(n, arr);
  for(int i=0; i<n; ++i){
    printf("\n%d", arr[i]);
  }
  return 0;
}
