#include<stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  int res=0;
  for(int i=0; i<=n; ++i){
    res+=i;
  }

  printf("%d", res);
  return 0;
}
