#include<stdio.h>
#include<algorithm>

long long f(int n){
  if(n == 0){
    return 1;
  }else{
    int max_digito = std::min(n, 9);
    long long acumulado = 0;
   for(int i=1; i<= max_digito; ++i ){
     acumulado += f(n-i);
   }
   return acumulado;
  }
}


int main(){
  int n;
  scanf("%d", &n);

  printf("%lld", f(n));
}
