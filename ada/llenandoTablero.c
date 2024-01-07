#include<stdio.h>

int f(int n){
  if(n== 0 || n==1){
    return 1;
  }else if(n == 2){
    return 2;
  }else{
    return f(n-1) + f(n-2);
  }
}



int main(){
  int n;
  scanf("%d", &n);

  long long k = f(n), res=1;
  for(int i = 0; i < n; ++i){
    res *= k;
  }
  //int k = f(n);
 // printf("%lld", (long long)pow(k, n));
  printf("%lld\n", res);
}
