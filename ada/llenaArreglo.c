#include<stdio.h>

void llena(int* ini, int* fin, int v){
  for(int* p=ini; p<fin; ++p){
    *p = v;
  }
}

void imprime(int a[], int n){
  for(int i=0; i<n; ++i){
    printf("%d", a[i]);
  }
  printf("\n");
}


int main(){
  int n = 5;
  int a[n];

  llena(&a[0], &a[0]+5, 2);
  imprime(a, n);

  llena(&a[1], &a[0]+4, 7);
  imprime(a, n);

  return 0;
}
