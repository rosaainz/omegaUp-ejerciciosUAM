#include<stdio.h>

int main(){
  int n, b;
  scanf("%d", &n);

  int arr[n];
  for(int i=0; i<n; ++i){
    scanf("%d", &arr[i]);
  }

  scanf("%d", &b);
  int cont=0;
  for(int i=0; i<n; ++i){
    if(b == arr[i]){
      cont += 1;
    }
  }

  printf("%d", cont);
  return 0;
}
