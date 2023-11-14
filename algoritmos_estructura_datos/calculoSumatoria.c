#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  long long res=0;
  for(int i=0; i<=n; ++i){
    res+=i;
  }

  printf("%lld", res);
  return 0;
}
