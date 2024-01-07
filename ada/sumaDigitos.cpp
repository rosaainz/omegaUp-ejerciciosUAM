#include<stdio.h>

long long f(int n){
  if(n == 0){
    return 1;
  }else{
    return 0;
  }
}


int main(){
  int n;
  scanf("%d", &n);

  printf("%lld", f(n));
}
