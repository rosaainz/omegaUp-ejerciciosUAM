#include<stdio.h>
#include<math.h>

long long  numTransiciones(int n){
  if( n == 0 || n == 1)
    return 0;
  else{
    return 2 * numTransiciones(n-1) + pow(2, n-1);
  }
}



int main(){
  int n;
  scanf("%d", &n);
  printf("%lld", numTransiciones(n));
  return 0;
}
