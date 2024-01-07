#include<stdio.h>

long long f(int n, int k){
  if(n == 0 || k==0){
    return 1;
  }else if(n==1){
    return 2;
  }else{
    return f(n-1, k) + f(n-2, k-1);
  }
  return 2;
}


int main(){
  int n, k;
  scanf("%d%d", &n, &k);

  printf("%lld", f(n,k));
}
