#include<stdio.h>

int main(){
  int n;

  scanf("%d", &n);

  for(int a=1; a<=n; a+=2){
    int espIzq = (n-a)/2;
    for(int i=1; i<= espIzq; i++){
      printf(" ");
    }
    for(int i=1; i<=a; i++){
      printf("@");
    }
    printf("\n");
  }
  return 0;
}
