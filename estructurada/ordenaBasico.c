#include<stdio.h>

void intercambia(int* a, int* b){
  int t = *a;
  *a = *b;
  *b = t;
}


void ordena(int* a, int* b){
  if(*a > *b){
    intercambia(a,b);
  }
}


int main(){
  int n;
  scanf("%d", &n);

  int arr[n];
  for(int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }

  for(int k=0; k < n-1; ++k){  //pasadas
    for(int i=0; i < n-1; ++i){
      ordena(&arr[i], &arr[i+1]);
    }
  }
  for(int i=0; i<n; ++i){
    printf("\n%d", arr[i]);
  }
  return 0;
}
